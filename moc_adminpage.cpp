/****************************************************************************
** Meta object code from reading C++ file 'adminpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adminpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminPage_t {
    QByteArrayData data[14];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPage_t qt_meta_stringdata_AdminPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AdminPage"
QT_MOC_LITERAL(1, 10, 30), // "on_deleteCustomersBttn_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(4, 66, 25), // "on_cancelButton_3_clicked"
QT_MOC_LITERAL(5, 92, 25), // "on_addItemConfirm_clicked"
QT_MOC_LITERAL(6, 118, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(7, 139, 25), // "on_deleteItemBttn_clicked"
QT_MOC_LITERAL(8, 165, 27), // "on_addCustomersBttn_clicked"
QT_MOC_LITERAL(9, 193, 22), // "on_addItemBttn_clicked"
QT_MOC_LITERAL(10, 216, 16), // "on_Close_clicked"
QT_MOC_LITERAL(11, 233, 32), // "on_createPurchasePushBtn_clicked"
QT_MOC_LITERAL(12, 266, 24), // "on_ViewCustomers_clicked"
QT_MOC_LITERAL(13, 291, 27) // "on_ChangeMembership_clicked"

    },
    "AdminPage\0on_deleteCustomersBttn_clicked\0"
    "\0on_cancelButton_clicked\0"
    "on_cancelButton_3_clicked\0"
    "on_addItemConfirm_clicked\0"
    "on_addButton_clicked\0on_deleteItemBttn_clicked\0"
    "on_addCustomersBttn_clicked\0"
    "on_addItemBttn_clicked\0on_Close_clicked\0"
    "on_createPurchasePushBtn_clicked\0"
    "on_ViewCustomers_clicked\0"
    "on_ChangeMembership_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_deleteCustomersBttn_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_cancelButton_3_clicked(); break;
        case 3: _t->on_addItemConfirm_clicked(); break;
        case 4: _t->on_addButton_clicked(); break;
        case 5: _t->on_deleteItemBttn_clicked(); break;
        case 6: _t->on_addCustomersBttn_clicked(); break;
        case 7: _t->on_addItemBttn_clicked(); break;
        case 8: _t->on_Close_clicked(); break;
        case 9: _t->on_createPurchasePushBtn_clicked(); break;
        case 10: _t->on_ViewCustomers_clicked(); break;
        case 11: _t->on_ChangeMembership_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminPage::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_AdminPage.data,
    qt_meta_data_AdminPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
