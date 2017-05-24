/****************************************************************************
** Meta object code from reading C++ file 'qdatabasemng.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../question4/qdatabasemng.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatabasemng.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDataBaseMNG_t {
    QByteArrayData data[5];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDataBaseMNG_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDataBaseMNG_t qt_meta_stringdata_QDataBaseMNG = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QDataBaseMNG"
QT_MOC_LITERAL(1, 13, 11), // "resultready"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "QStandardItem*"
QT_MOC_LITERAL(4, 41, 7) // "stdItem"

    },
    "QDataBaseMNG\0resultready\0\0QStandardItem*\0"
    "stdItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDataBaseMNG[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void QDataBaseMNG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDataBaseMNG *_t = static_cast<QDataBaseMNG *>(_o);
        switch (_id) {
        case 0: { int _r = _t->resultready((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (QDataBaseMNG::*_t)(QStandardItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDataBaseMNG::resultready)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QDataBaseMNG::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QDataBaseMNG.data,
      qt_meta_data_QDataBaseMNG,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDataBaseMNG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDataBaseMNG::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDataBaseMNG.stringdata))
        return static_cast<void*>(const_cast< QDataBaseMNG*>(this));
    return QThread::qt_metacast(_clname);
}

int QDataBaseMNG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
int QDataBaseMNG::resultready(QStandardItem * _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
