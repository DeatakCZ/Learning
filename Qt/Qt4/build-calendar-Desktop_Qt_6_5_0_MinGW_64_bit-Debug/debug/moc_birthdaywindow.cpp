/****************************************************************************
** Meta object code from reading C++ file 'birthdaywindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../calendar/birthdaywindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'birthdaywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBirthdayWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBirthdayWindowENDCLASS = QtMocHelpers::stringData(
    "BirthdayWindow",
    "notImplemented",
    "",
    "toggleStatusbar",
    "toggleToolbar",
    "aboutDialog",
    "aboutQtDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBirthdayWindowENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBirthdayWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBirthdayWindowENDCLASS_t qt_meta_stringdata_CLASSBirthdayWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "BirthdayWindow"
        QT_MOC_LITERAL(15, 14),  // "notImplemented"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 15),  // "toggleStatusbar"
        QT_MOC_LITERAL(47, 13),  // "toggleToolbar"
        QT_MOC_LITERAL(61, 11),  // "aboutDialog"
        QT_MOC_LITERAL(73, 13)   // "aboutQtDialog"
    },
    "BirthdayWindow",
    "notImplemented",
    "",
    "toggleStatusbar",
    "toggleToolbar",
    "aboutDialog",
    "aboutQtDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBirthdayWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BirthdayWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSBirthdayWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBirthdayWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBirthdayWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BirthdayWindow, std::true_type>,
        // method 'notImplemented'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleStatusbar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleToolbar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutQtDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BirthdayWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BirthdayWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notImplemented(); break;
        case 1: _t->toggleStatusbar(); break;
        case 2: _t->toggleToolbar(); break;
        case 3: _t->aboutDialog(); break;
        case 4: _t->aboutQtDialog(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *BirthdayWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BirthdayWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBirthdayWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BirthdayWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
