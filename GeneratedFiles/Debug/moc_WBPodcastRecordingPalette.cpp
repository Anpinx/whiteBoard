/****************************************************************************
** Meta object code from reading C++ file 'WBPodcastRecordingPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/podcast/WBPodcastRecordingPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBPodcastRecordingPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBPodcastRecordingPalette_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPodcastRecordingPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPodcastRecordingPalette_t qt_meta_stringdata_WBPodcastRecordingPalette = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WBPodcastRecordingPalette"
QT_MOC_LITERAL(1, 26, 21), // "recordingStateChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 35), // "WBPodcastController::Recordin..."
QT_MOC_LITERAL(4, 85, 24), // "recordingProgressChanged"
QT_MOC_LITERAL(5, 110, 2), // "ms"
QT_MOC_LITERAL(6, 113, 17), // "audioLevelChanged"
QT_MOC_LITERAL(7, 131, 5) // "level"

    },
    "WBPodcastRecordingPalette\0"
    "recordingStateChanged\0\0"
    "WBPodcastController::RecordingState\0"
    "recordingProgressChanged\0ms\0"
    "audioLevelChanged\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPodcastRecordingPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::UChar,    7,

       0        // eod
};

void WBPodcastRecordingPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBPodcastRecordingPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordingStateChanged((*reinterpret_cast< WBPodcastController::RecordingState(*)>(_a[1]))); break;
        case 1: _t->recordingProgressChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->audioLevelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBPodcastRecordingPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBActionPalette::staticMetaObject>(),
    qt_meta_stringdata_WBPodcastRecordingPalette.data,
    qt_meta_data_WBPodcastRecordingPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPodcastRecordingPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPodcastRecordingPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPodcastRecordingPalette.stringdata0))
        return static_cast<void*>(this);
    return WBActionPalette::qt_metacast(_clname);
}

int WBPodcastRecordingPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
