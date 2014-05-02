/****************************************************************************
** Meta object code from reading C++ file 'psd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../psd/psd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Psd_t {
    QByteArrayData data[13];
    char stringdata[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Psd_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Psd_t qt_meta_stringdata_Psd = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 26),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 29),
QT_MOC_LITERAL(4, 62, 32),
QT_MOC_LITERAL(5, 95, 27),
QT_MOC_LITERAL(6, 123, 29),
QT_MOC_LITERAL(7, 153, 38),
QT_MOC_LITERAL(8, 192, 31),
QT_MOC_LITERAL(9, 224, 28),
QT_MOC_LITERAL(10, 253, 29),
QT_MOC_LITERAL(11, 283, 27),
QT_MOC_LITERAL(12, 311, 34)
    },
    "Psd\0on_fs_spinBox_valueChanged\0\0"
    "on_direct_radioButton_clicked\0"
    "on_primitive_radioButton_clicked\0"
    "on_corr_radioButton_clicked\0"
    "on_arcorr_radioButton_clicked\0"
    "on_accuracy_doubleSpinBox_valueChanged\0"
    "on_accuracy_radioButton_clicked\0"
    "on_order_radioButton_clicked\0"
    "on_order_spinBox_valueChanged\0"
    "on_burg_radioButton_clicked\0"
    "on_burg_order_spinBox_valueChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Psd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08,
       3,    0,   72,    2, 0x08,
       4,    0,   73,    2, 0x08,
       5,    0,   74,    2, 0x08,
       6,    0,   75,    2, 0x08,
       7,    1,   76,    2, 0x08,
       8,    0,   79,    2, 0x08,
       9,    0,   80,    2, 0x08,
      10,    1,   81,    2, 0x08,
      11,    0,   84,    2, 0x08,
      12,    1,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Psd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Psd *_t = static_cast<Psd *>(_o);
        switch (_id) {
        case 0: _t->on_fs_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_direct_radioButton_clicked(); break;
        case 2: _t->on_primitive_radioButton_clicked(); break;
        case 3: _t->on_corr_radioButton_clicked(); break;
        case 4: _t->on_arcorr_radioButton_clicked(); break;
        case 5: _t->on_accuracy_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_accuracy_radioButton_clicked(); break;
        case 7: _t->on_order_radioButton_clicked(); break;
        case 8: _t->on_order_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_burg_radioButton_clicked(); break;
        case 10: _t->on_burg_order_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Psd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Psd.data,
      qt_meta_data_Psd,  qt_static_metacall, 0, 0}
};


const QMetaObject *Psd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Psd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Psd.stringdata))
        return static_cast<void*>(const_cast< Psd*>(this));
    return QWidget::qt_metacast(_clname);
}

int Psd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
