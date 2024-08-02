#include "WBWaveRecorder.h"

#include "Mmsystem.h"

#include "core/memcheck.h"

WBWaveRecorder::WBWaveRecorder(QObject * pParent)
    : QObject(pParent)
    , mIsRecording(false)
    , mMsTimeStamp(0)
    , mBufferLengthInMs(100)
    , mNbChannels(2)
    , mSampleRate(44100)
    , mBitsPerSample(16)
{
    // NOOP
}


WBWaveRecorder::~WBWaveRecorder()
{
    // NOOP
}


bool WBWaveRecorder::init(const QString& waveInDeviceName)
{
    UINT deviceID = WAVE_MAPPER;

    if (waveInDeviceName.length() > 0)
    {
        int count = waveInGetNumDevs();

        WAVEINCAPS caps;
        for (int i = 0; i < count; i++)
        {
            if (waveInGetDevCaps(i, &caps, sizeof(caps)) == MMSYSERR_NOERROR)
            {
                QString deviceName  = QString::fromWCharArray(caps.szPname);

                if (deviceName == waveInDeviceName)
                {
                    deviceID = i;
                    break;
                }
            }
        }
    }

    WAVEFORMATEX format;
    format.cbSize = 0;
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = mNbChannels;
    format.wBitsPerSample = mBitsPerSample;
    format.nSamplesPerSec = mSampleRate;
    format.nBlockAlign = format.nChannels * (format.wBitsPerSample / 8);
    format.nAvgBytesPerSec = format.nSamplesPerSec * format.nBlockAlign;

    if (waveInOpen(&mWaveInDevice, deviceID, &format, (DWORD)waveInProc, (DWORD_PTR)this, CALLBACK_FUNCTION) != MMSYSERR_NOERROR)
    {
        setLastErrorMessage("Cannot open wave in device ");
        return false;
    }

    int nbBuffers = 6;
    int sampleBufferSize = 44100 *  2 * 2 * mBufferLengthInMs / 1000; // 44.1 Khz * stereo * 16bit * buffer length

    for (int i = 0; i < nbBuffers; i++)
    {
        WAVEHDR* buffer = new WAVEHDR();
        ZeroMemory(buffer, sizeof(WAVEHDR));

        buffer->lpData = (LPSTR)new BYTE[sampleBufferSize];
        ZeroMemory(buffer->lpData, sampleBufferSize);

        buffer->dwBufferLength = sampleBufferSize;
        buffer->dwFlags = 0;

        if (waveInPrepareHeader(mWaveInDevice, buffer, sizeof(WAVEHDR)) != MMSYSERR_NOERROR)
        {
            setLastErrorMessage("Cannot prepare wave header");
            return false;
        }

        if (waveInAddBuffer(mWaveInDevice, buffer, sizeof(WAVEHDR)) != MMSYSERR_NOERROR)
        {
            setLastErrorMessage("Cannot add buffer");
            return false;
        }

        mWaveBuffers << buffer;
    }

    return true;
}


bool WBWaveRecorder::start()
{
    if (!mIsRecording)
    {
        mRecordingStartTime = QTime::currentTime();
        mMsTimeStamp = 0;
        mIsRecording = true;
    }

    if (waveInStart(mWaveInDevice) != MMSYSERR_NOERROR)
    {
        setLastErrorMessage("Cannot start wave in device ");
        return false;
    }

    return true;
}


bool WBWaveRecorder::stop()
{
    mIsRecording = false;

    if (waveInStop(mWaveInDevice) != MMSYSERR_NOERROR)
    {
        setLastErrorMessage("Cannot stop wave in device ");
        return false;
    }

    return true;
}


bool WBWaveRecorder::close()
{
    if (waveInReset(mWaveInDevice) != MMSYSERR_NOERROR)
    {
        setLastErrorMessage("Cannot reset wave in device ");
        return false;
    }

    foreach(WAVEHDR* buffer, mWaveBuffers)
    {
        waveInUnprepareHeader(mWaveInDevice, buffer, sizeof(WAVEHDR));
        delete [] buffer->lpData;
        delete buffer;
    }

    mWaveBuffers.clear();

    if (waveInClose(mWaveInDevice) != MMSYSERR_NOERROR)
    {
        setLastErrorMessage("Cannot close wave in device ");
        return false;
    }

    return true;
}


void CALLBACK WBWaveRecorder::waveInProc(HWAVEIN waveInDevice, UINT message, DWORD_PTR instance,
        DWORD_PTR param1, DWORD_PTR param2)
{
    Q_UNUSED(param2);

    if (message == WIM_DATA)
    {
        //qDebug() << "wave in receiving data";

        WBWaveRecorder* recorder = (WBWaveRecorder*)instance;
        WAVEHDR *buffer = (WAVEHDR *)param1;

        if (recorder && buffer && recorder->isRecording())
        {
                waveInUnprepareHeader(waveInDevice, buffer, sizeof(WAVEHDR));
            recorder->emitNewWaveBuffer(buffer);

            if (waveInPrepareHeader(waveInDevice, buffer, sizeof(WAVEHDR)) != MMSYSERR_NOERROR)
            {
                recorder->setLastErrorMessage("Cannot recycle wave header");
            }

            if (waveInAddBuffer(waveInDevice, buffer, sizeof(WAVEHDR)) != MMSYSERR_NOERROR)
            {
                recorder->setLastErrorMessage("Cannot recycle buffer");
            }
        }
    }
}


void WBWaveRecorder::emitNewWaveBuffer(WAVEHDR * pBuffer)
{
    if (mIsRecording)
    {
        emit newWaveBuffer(pBuffer, mMsTimeStamp);

        long bufferMs = pBuffer->dwBytesRecorded / mNbChannels / (mBitsPerSample / 8) * 1000 / mSampleRate;

        mMsTimeStamp += bufferMs;
    }
}


QStringList WBWaveRecorder::waveInDevices()
{
    QStringList devices;

    int count = waveInGetNumDevs();

    WAVEINCAPS caps;
    for (int i = 0; i < count; i++)
    {
        if (waveInGetDevCaps(i, &caps, sizeof(caps)) == MMSYSERR_NOERROR)
        {
            devices  << QString::fromWCharArray(caps.szPname);
        }
        else
        {
            qDebug() << "Cannot get wave in device " + QString("%1").arg(i) + " capacities";
        }
    }

    int mixersCount = mixerGetNumDevs();

    for(int i = 0; i < mixersCount; i++)
    {
        MIXERCAPS caps;

        if (mixerGetDevCaps(i, &caps, sizeof(caps)) == MMSYSERR_NOERROR)
        {
            qDebug() << "Mixer: "  << QString::fromWCharArray(caps.szPname);
        }
    }

    return devices;
}


