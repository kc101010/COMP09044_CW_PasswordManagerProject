/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../COMP09044_CW_PasswordManager/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_List_accounts_itemDoubleCl..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 65, 4), // "item"
QT_MOC_LITERAL(5, 70, 30), // "on_actionNew_Account_triggered"
QT_MOC_LITERAL(6, 101, 26), // "on_actionRefresh_triggered"
QT_MOC_LITERAL(7, 128, 33), // "on_input_Sort_currentIndexCha..."
QT_MOC_LITERAL(8, 162, 4), // "arg1"
QT_MOC_LITERAL(9, 167, 23), // "on_buttton_Sort_clicked"
QT_MOC_LITERAL(10, 191, 43), // "on_List_accounts_customContex..."
QT_MOC_LITERAL(11, 235, 3), // "pos"
QT_MOC_LITERAL(12, 239, 12), // "edit_account"
QT_MOC_LITERAL(13, 252, 8), // "Account*"
QT_MOC_LITERAL(14, 261, 2) // "ed"

    },
    "MainWindow\0on_List_accounts_itemDoubleClicked\0"
    "\0QTableWidgetItem*\0item\0"
    "on_actionNew_Account_triggered\0"
    "on_actionRefresh_triggered\0"
    "on_input_Sort_currentIndexChanged\0"
    "arg1\0on_buttton_Sort_clicked\0"
    "on_List_accounts_customContextMenuRequested\0"
    "pos\0edit_account\0Account*\0ed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      12,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_List_accounts_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_actionNew_Account_triggered(); break;
        case 2: _t->on_actionRefresh_triggered(); break;
        case 3: _t->on_input_Sort_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_buttton_Sort_clicked(); break;
        case 5: _t->on_List_accounts_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->edit_account((*reinterpret_cast< Account*(*)>(_a[1]))); break;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
