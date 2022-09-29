/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_chooseColorButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "recalcRGB"
QT_MOC_LITERAL(4, 51, 10), // "recalcCMYK"
QT_MOC_LITERAL(5, 62, 9), // "recalcHSV"
QT_MOC_LITERAL(6, 72, 9), // "recalcHLS"
QT_MOC_LITERAL(7, 82, 9), // "recalcXYZ"
QT_MOC_LITERAL(8, 92, 9), // "recalcLAB"
QT_MOC_LITERAL(9, 102, 8), // "RGBtoXYZ"
QT_MOC_LITERAL(10, 111, 40), // "std::pair<float,std::pair<flo..."
QT_MOC_LITERAL(11, 152, 8), // "XYZtoRGB"
QT_MOC_LITERAL(12, 161, 8), // "LABtoXYZ"
QT_MOC_LITERAL(13, 170, 8), // "XYZtoLAB"
QT_MOC_LITERAL(14, 179, 20), // "on_cmyk_stateChanged"
QT_MOC_LITERAL(15, 200, 4), // "arg1"
QT_MOC_LITERAL(16, 205, 19), // "on_lab_stateChanged"
QT_MOC_LITERAL(17, 225, 19), // "on_xyz_stateChanged"
QT_MOC_LITERAL(18, 245, 19), // "on_hsl_stateChanged"
QT_MOC_LITERAL(19, 265, 19), // "on_hsv_stateChanged"
QT_MOC_LITERAL(20, 285, 19) // "on_rgb_stateChanged"

    },
    "MainWindow\0on_chooseColorButton_clicked\0"
    "\0recalcRGB\0recalcCMYK\0recalcHSV\0"
    "recalcHLS\0recalcXYZ\0recalcLAB\0RGBtoXYZ\0"
    "std::pair<float,std::pair<float,float> >\0"
    "XYZtoRGB\0LABtoXYZ\0XYZtoLAB\0"
    "on_cmyk_stateChanged\0arg1\0on_lab_stateChanged\0"
    "on_xyz_stateChanged\0on_hsl_stateChanged\0"
    "on_hsv_stateChanged\0on_rgb_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      11,    3,  107,    2, 0x08 /* Private */,
      12,    3,  114,    2, 0x08 /* Private */,
      13,    3,  121,    2, 0x08 /* Private */,
      14,    1,  128,    2, 0x08 /* Private */,
      16,    1,  131,    2, 0x08 /* Private */,
      17,    1,  134,    2, 0x08 /* Private */,
      18,    1,  137,    2, 0x08 /* Private */,
      19,    1,  140,    2, 0x08 /* Private */,
      20,    1,  143,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 10,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_chooseColorButton_clicked(); break;
        case 1: _t->recalcRGB(); break;
        case 2: _t->recalcCMYK(); break;
        case 3: _t->recalcHSV(); break;
        case 4: _t->recalcHLS(); break;
        case 5: _t->recalcXYZ(); break;
        case 6: _t->recalcLAB(); break;
        case 7: { std::pair<float,std::pair<float,float> > _r = _t->RGBtoXYZ();
            if (_a[0]) *reinterpret_cast< std::pair<float,std::pair<float,float> >*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->XYZtoRGB((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 9: _t->LABtoXYZ((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 10: _t->XYZtoLAB((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 11: _t->on_cmyk_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_lab_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_xyz_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_hsl_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_hsv_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_rgb_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
