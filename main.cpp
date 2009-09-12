#include <QtGui/QApplication>
#include "qtcast.h"

/* C++ program, so Pantheios init is automatic! */
#include <pantheios/pantheios.hpp>
#include <pantheios/frontends/fe.simple.h>
#include <pantheios/backends/bec.file.h>

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "QtCast";

int main(int argc, char *argv[])
{
    try
    {
        // Set the file name for the local back-end, truncating the
        // file's existing contents, if any.
        pantheios_be_file_setFilePath( "QtCast.log" );

        pantheios::log_NOTICE( "Initializing Qt application." );
    }
    catch(std::bad_alloc&)
    {
        pantheios::logputs( pantheios::alert, "out of memory" );
    }
    catch(std::exception& x)
    {
        pantheios::log_CRITICAL( "Exception: ", x );
    }
    catch(...)
    {
        pantheios::logputs( pantheios::emergency, "Unexpected unknown error" );
    }

    QApplication a(argc, argv);
    QtCast w;
    w.show();
    return a.exec();
}
