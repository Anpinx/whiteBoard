/****************************************************************************
** Meta object code from reading C++ file 'WBWebView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/web/browser/WBWebView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBWebPage_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBWebPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBWebPage_t qt_meta_stringdata_WBWebPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WBWebPage"
QT_MOC_LITERAL(1, 10, 10), // "loadingUrl"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "url"
QT_MOC_LITERAL(4, 26, 24), // "handleUnsupportedContent"
QT_MOC_LITERAL(5, 51, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 66, 5) // "reply"

    },
    "WBWebPage\0loadingUrl\0\0url\0"
    "handleUnsupportedContent\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBWebPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void WBWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBWebPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadingUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBWebPage::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBWebPage::loadingUrl)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBWebPage::staticMetaObject = { {
    QMetaObject::SuperData::link<WBWebPage_::staticMetaObject>(),
    qt_meta_stringdata_WBWebPage.data,
    qt_meta_data_WBWebPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebPage.stringdata0))
        return static_cast<void*>(this);
    return WBWebPage_::qt_metacast(_clname);
}

int WBWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBWebPage_::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WBWebPage::loadingUrl(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WBWebView_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBWebView_t qt_meta_stringdata_WBWebView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WBWebView"
QT_MOC_LITERAL(1, 10, 11), // "setProgress"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "progress"
QT_MOC_LITERAL(4, 32, 12), // "loadFinished"
QT_MOC_LITERAL(5, 45, 2), // "ok"
QT_MOC_LITERAL(6, 48, 11), // "loadStarted"
QT_MOC_LITERAL(7, 60, 16), // "setStatusBarText"
QT_MOC_LITERAL(8, 77, 6), // "string"
QT_MOC_LITERAL(9, 84, 17), // "downloadRequested"
QT_MOC_LITERAL(10, 102, 15), // "QNetworkRequest"
QT_MOC_LITERAL(11, 118, 7), // "request"
QT_MOC_LITERAL(12, 126, 16) // "openLinkInNewTab"

    },
    "WBWebView\0setProgress\0\0progress\0"
    "loadFinished\0ok\0loadStarted\0"
    "setStatusBarText\0string\0downloadRequested\0"
    "QNetworkRequest\0request\0openLinkInNewTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBWebView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void WBWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadStarted(); break;
        case 3: _t->setStatusBarText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->downloadRequested((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 5: _t->openLinkInNewTab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBWebView::staticMetaObject = { {
    QMetaObject::SuperData::link<WBWebTrapWebView::staticMetaObject>(),
    qt_meta_stringdata_WBWebView.data,
    qt_meta_data_WBWebView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebView.stringdata0))
        return static_cast<void*>(this);
    return WBWebTrapWebView::qt_metacast(_clname);
}

int WBWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBWebTrapWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
