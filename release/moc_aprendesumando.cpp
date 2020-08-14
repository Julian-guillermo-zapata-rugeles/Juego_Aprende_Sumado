/****************************************************************************
** Meta object code from reading C++ file 'aprendesumando.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../aprendeAsumar/aprendesumando.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aprendesumando.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_aprendeSumando[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      36,   15,   15,   15, 0x08,
      60,   15,   15,   15, 0x08,
      84,   15,   15,   15, 0x08,
     108,   15,   15,   15, 0x08,
     128,   15,   15,   15, 0x08,
     148,   15,   15,   15, 0x08,
     168,   15,   15,   15, 0x08,
     190,   15,   15,   15, 0x08,
     212,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_aprendeSumando[] = {
    "aprendeSumando\0\0on_nivel1_clicked()\0"
    "on_respuesta1_clicked()\0on_respuesta2_clicked()\0"
    "on_respuesta3_clicked()\0on_nivel2_clicked()\0"
    "on_nivel3_clicked()\0on_nivel4_clicked()\0"
    "on_nivel4_2_clicked()\0on_nivel4_3_clicked()\0"
    "on_nivel4_4_clicked()\0"
};

void aprendeSumando::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        aprendeSumando *_t = static_cast<aprendeSumando *>(_o);
        switch (_id) {
        case 0: _t->on_nivel1_clicked(); break;
        case 1: _t->on_respuesta1_clicked(); break;
        case 2: _t->on_respuesta2_clicked(); break;
        case 3: _t->on_respuesta3_clicked(); break;
        case 4: _t->on_nivel2_clicked(); break;
        case 5: _t->on_nivel3_clicked(); break;
        case 6: _t->on_nivel4_clicked(); break;
        case 7: _t->on_nivel4_2_clicked(); break;
        case 8: _t->on_nivel4_3_clicked(); break;
        case 9: _t->on_nivel4_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData aprendeSumando::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject aprendeSumando::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_aprendeSumando,
      qt_meta_data_aprendeSumando, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &aprendeSumando::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *aprendeSumando::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *aprendeSumando::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_aprendeSumando))
        return static_cast<void*>(const_cast< aprendeSumando*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int aprendeSumando::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
