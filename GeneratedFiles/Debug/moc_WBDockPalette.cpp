/****************************************************************************
** Meta object code from reading C++ file 'WBDockPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBDockPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDockPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBTabDockPalette_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBTabDockPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBTabDockPalette_t qt_meta_stringdata_WBTabDockPalette = {
    {
QT_MOC_LITERAL(0, 0, 16) // "WBTabDockPalette"

    },
    "WBTabDockPalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBTabDockPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WBTabDockPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBTabDockPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBTabDockPalette.data,
    qt_meta_data_WBTabDockPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBTabDockPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBTabDockPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBTabDockPalette.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBTabDockPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDockPalette_t {
    QByteArrayData data[16];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDockPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDockPalette_t qt_meta_stringdata_WBDockPalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WBDockPalette"
QT_MOC_LITERAL(1, 14, 12), // "mouseEntered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 28), // "pageSelectionChangedRequired"
QT_MOC_LITERAL(4, 57, 15), // "onShowTabWidget"
QT_MOC_LITERAL(5, 73, 20), // "WBDockPaletteWidget*"
QT_MOC_LITERAL(6, 94, 6), // "widget"
QT_MOC_LITERAL(7, 101, 15), // "onHideTabWidget"
QT_MOC_LITERAL(8, 117, 22), // "onAllDownloadsFinished"
QT_MOC_LITERAL(9, 140, 13), // "onDocumentSet"
QT_MOC_LITERAL(10, 154, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(11, 171, 13), // "documentProxy"
QT_MOC_LITERAL(12, 185, 19), // "onToolbarPosUpdated"
QT_MOC_LITERAL(13, 205, 15), // "onResizeRequest"
QT_MOC_LITERAL(14, 221, 13), // "QResizeEvent*"
QT_MOC_LITERAL(15, 235, 5) // "event"

    },
    "WBDockPalette\0mouseEntered\0\0"
    "pageSelectionChangedRequired\0"
    "onShowTabWidget\0WBDockPaletteWidget*\0"
    "widget\0onHideTabWidget\0onAllDownloadsFinished\0"
    "onDocumentSet\0WBDocumentProxy*\0"
    "documentProxy\0onToolbarPosUpdated\0"
    "onResizeRequest\0QResizeEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDockPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void WBDockPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDockPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseEntered(); break;
        case 1: _t->pageSelectionChangedRequired(); break;
        case 2: _t->onShowTabWidget((*reinterpret_cast< WBDockPaletteWidget*(*)>(_a[1]))); break;
        case 3: _t->onHideTabWidget((*reinterpret_cast< WBDockPaletteWidget*(*)>(_a[1]))); break;
        case 4: _t->onAllDownloadsFinished(); break;
        case 5: _t->onDocumentSet((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 6: _t->onToolbarPosUpdated(); break;
        case 7: _t->onResizeRequest((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDockPaletteWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDockPaletteWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDockPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDockPalette::mouseEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDockPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDockPalette::pageSelectionChangedRequired)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDockPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDockPalette.data,
    qt_meta_data_WBDockPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDockPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDockPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDockPalette.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBDockPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WBDockPalette::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDockPalette::pageSelectionChangedRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
