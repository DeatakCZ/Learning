/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Kalkulacka/widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "numberTooBig",
    "",
    "setPlus",
    "setMinus",
    "setTimes",
    "setDivide",
    "setHex",
    "setDec",
    "setOct",
    "setBin",
    "getFalseOp",
    "operand",
    "getZeroDivide",
    "calculate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[7];
    char stringdata10[7];
    char stringdata11[11];
    char stringdata12[8];
    char stringdata13[14];
    char stringdata14[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 12),  // "numberTooBig"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 7),  // "setPlus"
        QT_MOC_LITERAL(29, 8),  // "setMinus"
        QT_MOC_LITERAL(38, 8),  // "setTimes"
        QT_MOC_LITERAL(47, 9),  // "setDivide"
        QT_MOC_LITERAL(57, 6),  // "setHex"
        QT_MOC_LITERAL(64, 6),  // "setDec"
        QT_MOC_LITERAL(71, 6),  // "setOct"
        QT_MOC_LITERAL(78, 6),  // "setBin"
        QT_MOC_LITERAL(85, 10),  // "getFalseOp"
        QT_MOC_LITERAL(96, 7),  // "operand"
        QT_MOC_LITERAL(104, 13),  // "getZeroDivide"
        QT_MOC_LITERAL(118, 9)   // "calculate"
    },
    "Widget",
    "numberTooBig",
    "",
    "setPlus",
    "setMinus",
    "setTimes",
    "setDivide",
    "setHex",
    "setDec",
    "setOct",
    "setBin",
    "getFalseOp",
    "operand",
    "getZeroDivide",
    "calculate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    0,   90,    2, 0x0a,    5 /* Public */,
       7,    0,   91,    2, 0x0a,    6 /* Public */,
       8,    0,   92,    2, 0x0a,    7 /* Public */,
       9,    0,   93,    2, 0x0a,    8 /* Public */,
      10,    0,   94,    2, 0x0a,    9 /* Public */,
      11,    1,   95,    2, 0x0a,   10 /* Public */,
      13,    0,   98,    2, 0x0a,   12 /* Public */,
      14,    0,   99,    2, 0x0a,   13 /* Public */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'numberTooBig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPlus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMinus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTimes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDivide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDec'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getFalseOp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getZeroDivide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calculate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numberTooBig(); break;
        case 1: _t->setPlus(); break;
        case 2: _t->setMinus(); break;
        case 3: _t->setTimes(); break;
        case 4: _t->setDivide(); break;
        case 5: _t->setHex(); break;
        case 6: _t->setDec(); break;
        case 7: _t->setOct(); break;
        case 8: _t->setBin(); break;
        case 9: _t->getFalseOp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->getZeroDivide(); break;
        case 11: _t->calculate(); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
