/****************************************************************************
** Meta object code from reading C++ file 'WBToolbarButtonGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBToolbarButtonGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBToolbarButtonGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBToolbarButtonGroup_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBToolbarButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBToolbarButtonGroup_t qt_meta_stringdata_WBToolbarButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBToolbarButtonGroup"
QT_MOC_LITERAL(1, 21, 9), // "activated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 58, 15), // "setCurrentIndex"
QT_MOC_LITERAL(6, 74, 19), // "colorPaletteChanged"
QT_MOC_LITERAL(7, 94, 11), // "displayText"
QT_MOC_LITERAL(8, 106, 7), // "display"
QT_MOC_LITERAL(9, 114, 8), // "selected"
QT_MOC_LITERAL(10, 123, 8), // "QAction*"
QT_MOC_LITERAL(11, 132, 6) // "action"

    },
    "WBToolbarButtonGroup\0activated\0\0index\0"
    "currentIndexChanged\0setCurrentIndex\0"
    "colorPaletteChanged\0displayText\0display\0"
    "selected\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBToolbarButtonGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void WBToolbarButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBToolbarButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->colorPaletteChanged(); break;
        case 4: _t->displayText((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->selected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBToolbarButtonGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBToolbarButtonGroup::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBToolbarButtonGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBToolbarButtonGroup::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBToolbarButtonGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBToolbarButtonGroup.data,
    qt_meta_data_WBToolbarButtonGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBToolbarButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBToolbarButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBToolbarButtonGroup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBToolbarButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WBToolbarButtonGroup::activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBToolbarButtonGroup::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
