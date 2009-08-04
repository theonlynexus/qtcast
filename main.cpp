#include <QtGui/QApplication>
#include "qtcast.h"

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    QtCast w;
    w.show();
    return a.exec();
}
