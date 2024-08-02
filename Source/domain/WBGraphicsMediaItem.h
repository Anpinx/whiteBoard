#ifndef WBGRAPHICSMEDIAITEM_H
#define WBGRAPHICSMEDIAITEM_H

#include <QtWidgets/QGraphicsView>
#include "WBGraphicsProxyWidget.h"

#include <QAudioOutput>
#include <QMediaObject>
#include <QMediaPlayer>
#include <QMediaService>

#include <QtMultimediaWidgets/QVideoWidget>
#include <QtMultimedia/QVideoFrame>

#include "core/WBApplication.h"
#include "board/WBBoardController.h"
#include "frameworks/WBFileSystemUtils.h"

class QGraphicsVideoItem;

class WBGraphicsMediaItem : public QObject, public WBItem, public WBGraphicsItem, public QGraphicsRectItem, public WBResizableGraphicsItem
{
    Q_OBJECT

public:
    typedef enum{
        mediaType_Video,
        mediaType_Audio
    } mediaType;

    enum { Type = WBGraphicsItemType::MediaItemType };

    virtual int type() const
    {
        return Type;
    }

    static WBGraphicsMediaItem* createMediaItem(const QUrl& pMediaFileUrl, QGraphicsItem* parent = 0);

    WBGraphicsMediaItem(const QUrl& pMediaFileUrl, QGraphicsItem* parent = 0);
    ~WBGraphicsMediaItem();

    virtual mediaType getMediaType() const = 0;

    virtual WBGraphicsScene* scene();
    bool hasLinkedImage() const             { return haveLinkedImage; }
    virtual QUrl mediaFileUrl() const       { return mMediaFileUrl; }
    bool isMuted() const                    { return mMuted; }
    qint64 initialPos() const               { return mInitialPos; }

    bool isMediaSeekable() const;
    qint64 mediaDuration() const;
    qint64 mediaPosition() const;

    QMediaPlayer::State playerState() const;
    bool isPlaying() const { return (mMediaObject->state() == QMediaPlayer::PlayingState); }
    bool isPaused() const { return (mMediaObject->state() == QMediaPlayer::PausedState); }
    bool isStopped() const;

    QRectF boundingRect() const;

    QSizeF size() const { return rect().size(); } 

    // Setters
    virtual void setMediaFileUrl(QUrl url);
    void setInitialPos(qint64 p);
    void setMediaPos(qint64 p);
    virtual void setSourceUrl(const QUrl &pSourceUrl);
    void setSelected(bool selected);
    void setMinimumSize(const QSize& size);
    void setUuid(const QUuid &pUuid);

    virtual void copyItemParameters(WBItem *copy) const;

    virtual void setSize(int width, int height);
    void resize(qreal w, qreal h) { setSize(w, h); }

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:
    void toggleMute();
    void setMute(bool bMute);
    void activeSceneChanged();
    void showOnDisplayChanged(bool shown);

    virtual void play();
    virtual void pause();
    virtual void stop();
    virtual void togglePlayPause();

protected slots:
    void mediaError(QMediaPlayer::Error errorCode);

protected:
    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);

    virtual void clearSource();

    QMediaPlayer *mMediaObject;

    QSize mMinimumSize;

    bool mMuted;
    bool mMutedByUserAction;
    static bool sIsMutedByDefault;
    bool mStopped;

    QUrl mMediaFileUrl;
    QString mMediaSource;

    bool mShouldMove;
    QPointF mMousePressPos;
    QPointF mMouseMovePos;

    bool haveLinkedImage;
    QGraphicsPixmapItem *mLinkedImage;

    qint64 mInitialPos;

    QString mErrorString;
};

class WBGraphicsAudioItem: public WBGraphicsMediaItem
{
    Q_OBJECT

public:
    enum { Type = WBGraphicsItemType::AudioItemType};
    virtual int type() const
    {
        return Type;
    }

    WBGraphicsAudioItem(const QUrl& pMediaFileUrl, QGraphicsItem *parent = 0);
    mediaType getMediaType() const { return mediaType_Audio; }

    virtual WBItem* deepCopy() const;
};

class WBGraphicsVideoItem: public WBGraphicsMediaItem
{
    Q_OBJECT

public:
    enum { Type = WBGraphicsItemType::VideoItemType};
    virtual int type() const
    {
        return Type;
    }

    WBGraphicsVideoItem(const QUrl& pMediaFileUrl, QGraphicsItem *parent = 0);

    mediaType getMediaType() const { return mediaType_Video; }

    void setSize(int width, int height);

    virtual WBItem* deepCopy() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:
    void videoSizeChanged(QSizeF newSize);
    void hasVideoChanged(bool hasVideo);
    void mediaStateChanged(QMediaPlayer::State state);
    void activeSceneChanged();

protected slots:
    void mediaError(QMediaPlayer::Error errorCode);

protected:
    QGraphicsVideoItem *mVideoItem;

    virtual QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

    void setPlaceholderVisible(bool visible);

    bool mHasVideoOutput;
};

#endif // WBGRAPHICSMEDIAITEM_H
