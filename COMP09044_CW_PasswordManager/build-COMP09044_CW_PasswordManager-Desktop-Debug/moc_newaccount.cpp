/****************************************************************************
** Meta object code from reading C++ file 'newaccount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../COMP09044_CW_PasswordManager/newaccount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newaccount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewAccount_t {
    QByteArrayData data[8];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewAccount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewAccount_t qt_meta_stringdata_NewAccount = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NewAccount"
QT_MOC_LITERAL(1, 11, 29), // "on_button_cancel_exit_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "on_buttonSubmit_clicked"
QT_MOC_LITERAL(4, 66, 38), // "on_input_GeneratePassword_sta..."
QT_MOC_LITERAL(5, 105, 4), // "arg1"
QT_MOC_LITERAL(6, 110, 33), // "on_input_Username_editingFini..."
QT_MOC_LITERAL(7, 144, 30) // "on_input_Email_editingFinished"

    },
    "NewAccount\0on_button_cancel_exit_clicked\0"
    "\0on_buttonSubmit_clicked\0"
    "on_input_GeneratePassword_stateChanged\0"
    "arg1\0on_input_Username_editingFinished\0"
    "on_input_Email_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewAccount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewAccount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewAccount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_cancel_exit_clicked(); break;
        case 1: _t->on_buttonSubmit_clicked(); break;
        case 2: _t->on_input_GeneratePassword_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_input_Username_editingFinished(); break;
        case 4: _t->on_input_Email_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewAccount::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_NewAccount.data,
    qt_meta_data_NewAccount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewAccount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewAccount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewAccount.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewAccount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
