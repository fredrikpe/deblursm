/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      28,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     111,   11,   11,   11, 0x08,
     137,  132,   11,   11, 0x08,
     160,   11,   11,   11, 0x08,
     167,   11,   11,   11, 0x08,
     174,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     193,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     227,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     298,   11,   11,   11, 0x08,
     337,  319,   11,   11, 0x08,
     372,  361,   11,   11, 0x08,
     406,  400,   11,   11, 0x08,
     433,  400,   11,   11, 0x08,
     463,  400,   11,   11, 0x08,
     503,  501,  489,   11, 0x08,
     513,  501,   11,   11, 0x08,
     533,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0radiusChanged()\0PSNRChanged()\0"
    "kernelFeatherChanged()\0kernelStrengthChanged()\0"
    "motionLengthChanged()\0motionAngleChanged()\0"
    "type\0defectTypeChanged(int)\0open()\0"
    "save()\0zoomIn()\0zoomOut()\0actualSize()\0"
    "fitToWindow()\0help()\0showOriginalPressed()\0"
    "showOriginalReleased()\0updateFullDeconvolution()\0"
    "updateZoomControls()\0deconvolutionTime\0"
    "updatePreviewImage(int)\0value,text\0"
    "updateProgress(int,QString)\0value\0"
    "imageSizeLimitChanged(int)\0"
    "tvIterationsCountChanged(int)\0"
    "previewMethodChanged(int)\0std::string\0"
    "i\0itos(int)\0setClusterSize(int)\0"
    "newCluster()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->radiusChanged(); break;
        case 1: _t->PSNRChanged(); break;
        case 2: _t->kernelFeatherChanged(); break;
        case 3: _t->kernelStrengthChanged(); break;
        case 4: _t->motionLengthChanged(); break;
        case 5: _t->motionAngleChanged(); break;
        case 6: _t->defectTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->open(); break;
        case 8: _t->save(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->actualSize(); break;
        case 12: _t->fitToWindow(); break;
        case 13: _t->help(); break;
        case 14: _t->showOriginalPressed(); break;
        case 15: _t->showOriginalReleased(); break;
        case 16: _t->updateFullDeconvolution(); break;
        case 17: _t->updateZoomControls(); break;
        case 18: _t->updatePreviewImage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->imageSizeLimitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->tvIterationsCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->previewMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: { std::string _r = _t->itos((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 24: _t->setClusterSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->newCluster(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
