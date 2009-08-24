#include <QtGui/QApplication>
#include "qtcast.h"

/* C++ program, so Pantheios init is automatic! */
#include <pantheios/pantheios.hpp>

/* Using Pantheios implicit linking features */
/* WTF? Does not work on GCC 4.4 + Linux
#include <pantheios/implicit_link/core.h>
#include <pantheios/implicit_link/fe.simple.h>
#include <pantheios/implicit_link/be.file.h>
*/


int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    QtCast w;
    w.show();
    return a.exec();
}
