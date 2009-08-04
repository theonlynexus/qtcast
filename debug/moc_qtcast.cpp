/****************************************************************************
** Meta object code from reading C++ file 'qtcast.h'
**
** Created: Tue Aug 4 06:21:10 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtcast.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtCast[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      33,    7,    7,    7, 0x08,
      59,    7,    7,    7, 0x08,
      98,    7,    7,    7, 0x08,
     127,    7,    7,    7, 0x08,
     166,    7,    7,    7, 0x08,
     203,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtCast[] = {
    "QtCast\0\0on_btnAddTrack_clicked()\0"
    "on_actionExit_triggered()\0"
    "on_editEdpisodeTitle_editingFinished()\0"
    "on_spinBox_editingFinished()\0"
    "on_editPodcastAuthor_editingFinished()\0"
    "on_editPodcastName_editingFinished()\0"
    "on_btnSelectLogo_clicked()\0"
};

const QMetaObject QtCast::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtCast,
      qt_meta_data_QtCast, 0 }
};

const QMetaObject *QtCast::metaObject() const
{
    return &staticMetaObject;
}

void *QtCast::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCast))
        return static_cast<void*>(const_cast< QtCast*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtCast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnAddTrack_clicked(); break;
        case 1: on_actionExit_triggered(); break;
        case 2: on_editEdpisodeTitle_editingFinished(); break;
        case 3: on_spinBox_editingFinished(); break;
        case 4: on_editPodcastAuthor_editingFinished(); break;
        case 5: on_editPodcastName_editingFinished(); break;
        case 6: on_btnSelectLogo_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
