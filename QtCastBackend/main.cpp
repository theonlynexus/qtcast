#include <QtCore/QCoreApplication>
#include <QEventLoop>

#include"qtcastbackend.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("After QCoreAppliction constructor.\n");fflush(stdout);

    QtCastBackend backend;
    printf("After QtCastBackend constructor.\n");fflush(stdout);

    if( !a.connect( &backend, SIGNAL(exit()), &a, SLOT(quit()) ) )
    { printf("Connect backend.exit failed!\n");fflush(stdout); }

    return a.exec();
}
