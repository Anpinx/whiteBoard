/****************************************************************************
** Meta object code from reading C++ file 'WBPersistenceManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBPersistenceManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBPersistenceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBPersistenceManager_t {
    QByteArrayData data[13];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPersistenceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPersistenceManager_t qt_meta_stringdata_WBPersistenceManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBPersistenceManager"
QT_MOC_LITERAL(1, 21, 16), // "proxyListChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "documentCreated"
QT_MOC_LITERAL(4, 55, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(5, 72, 14), // "pDocumentProxy"
QT_MOC_LITERAL(6, 87, 23), // "documentMetadataChanged"
QT_MOC_LITERAL(7, 111, 21), // "documentWillBeDeleted"
QT_MOC_LITERAL(8, 133, 20), // "documentSceneCreated"
QT_MOC_LITERAL(9, 154, 6), // "pIndex"
QT_MOC_LITERAL(10, 161, 26), // "documentSceneWillBeDeleted"
QT_MOC_LITERAL(11, 188, 25), // "documentRepositoryChanged"
QT_MOC_LITERAL(12, 214, 4) // "path"

    },
    "WBPersistenceManager\0proxyListChanged\0"
    "\0documentCreated\0WBDocumentProxy*\0"
    "pDocumentProxy\0documentMetadataChanged\0"
    "documentWillBeDeleted\0documentSceneCreated\0"
    "pIndex\0documentSceneWillBeDeleted\0"
    "documentRepositoryChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPersistenceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       8,    2,   59,    2, 0x06 /* Public */,
      10,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void WBPersistenceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBPersistenceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyListChanged(); break;
        case 1: _t->documentCreated((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 2: _t->documentMetadataChanged((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 3: _t->documentWillBeDeleted((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 4: _t->documentSceneCreated((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->documentSceneWillBeDeleted((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->documentRepositoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBPersistenceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::proxyListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBPersistenceManager::*)(WBDocumentProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::documentCreated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBPersistenceManager::*)(WBDocumentProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::documentMetadataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBPersistenceManager::*)(WBDocumentProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::documentWillBeDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBPersistenceManager::*)(WBDocumentProxy * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::documentSceneCreated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBPersistenceManager::*)(WBDocumentProxy * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceManager::documentSceneWillBeDeleted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBPersistenceManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBPersistenceManager.data,
    qt_meta_data_WBPersistenceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPersistenceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPersistenceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPersistenceManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBPersistenceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WBPersistenceManager::proxyListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBPersistenceManager::documentCreated(WBDocumentProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBPersistenceManager::documentMetadataChanged(WBDocumentProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBPersistenceManager::documentWillBeDeleted(WBDocumentProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBPersistenceManager::documentSceneCreated(WBDocumentProxy * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBPersistenceManager::documentSceneWillBeDeleted(WBDocumentProxy * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
