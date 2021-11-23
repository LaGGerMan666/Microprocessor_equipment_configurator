/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Test_task/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[462];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_action_Create_triggered"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(64, 26), // "on_action_SaveAs_triggered"
QT_MOC_LITERAL(91, 25), // "on_action_Close_triggered"
QT_MOC_LITERAL(117, 22), // "on_Radio_Input_clicked"
QT_MOC_LITERAL(140, 23), // "on_Radio_Output_clicked"
QT_MOC_LITERAL(164, 27), // "on_pb_DellInterface_clicked"
QT_MOC_LITERAL(192, 31), // "on_pb_DellAllInterfaces_clicked"
QT_MOC_LITERAL(224, 26), // "on_pb_AddInterface_clicked"
QT_MOC_LITERAL(251, 30), // "on_pb_AddAllInterfaces_clicked"
QT_MOC_LITERAL(282, 39), // "on_lw_AvailableInterfaces_dou..."
QT_MOC_LITERAL(322, 11), // "QModelIndex"
QT_MOC_LITERAL(334, 5), // "index"
QT_MOC_LITERAL(340, 38), // "on_lw_SelectedInterfaces_doub..."
QT_MOC_LITERAL(379, 25), // "on_pb_AddModeGIPO_clicked"
QT_MOC_LITERAL(405, 26), // "on_pb_DellModeGIPO_clicked"
QT_MOC_LITERAL(432, 17), // "slot_createConfig"
QT_MOC_LITERAL(450, 11) // "config_name"

    },
    "MainWindow\0on_action_Create_triggered\0"
    "\0on_action_Open_triggered\0"
    "on_action_SaveAs_triggered\0"
    "on_action_Close_triggered\0"
    "on_Radio_Input_clicked\0on_Radio_Output_clicked\0"
    "on_pb_DellInterface_clicked\0"
    "on_pb_DellAllInterfaces_clicked\0"
    "on_pb_AddInterface_clicked\0"
    "on_pb_AddAllInterfaces_clicked\0"
    "on_lw_AvailableInterfaces_doubleClicked\0"
    "QModelIndex\0index\0"
    "on_lw_SelectedInterfaces_doubleClicked\0"
    "on_pb_AddModeGIPO_clicked\0"
    "on_pb_DellModeGIPO_clicked\0slot_createConfig\0"
    "config_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    0,  109,    2, 0x08,    6 /* Private */,
       8,    0,  110,    2, 0x08,    7 /* Private */,
       9,    0,  111,    2, 0x08,    8 /* Private */,
      10,    0,  112,    2, 0x08,    9 /* Private */,
      11,    0,  113,    2, 0x08,   10 /* Private */,
      12,    1,  114,    2, 0x08,   11 /* Private */,
      15,    1,  117,    2, 0x08,   13 /* Private */,
      16,    0,  120,    2, 0x08,   15 /* Private */,
      17,    0,  121,    2, 0x08,   16 /* Private */,
      18,    1,  122,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_action_Create_triggered(); break;
        case 1: _t->on_action_Open_triggered(); break;
        case 2: _t->on_action_SaveAs_triggered(); break;
        case 3: _t->on_action_Close_triggered(); break;
        case 4: _t->on_Radio_Input_clicked(); break;
        case 5: _t->on_Radio_Output_clicked(); break;
        case 6: _t->on_pb_DellInterface_clicked(); break;
        case 7: _t->on_pb_DellAllInterfaces_clicked(); break;
        case 8: _t->on_pb_AddInterface_clicked(); break;
        case 9: _t->on_pb_AddAllInterfaces_clicked(); break;
        case 10: _t->on_lw_AvailableInterfaces_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_lw_SelectedInterfaces_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_pb_AddModeGIPO_clicked(); break;
        case 13: _t->on_pb_DellModeGIPO_clicked(); break;
        case 14: _t->slot_createConfig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
