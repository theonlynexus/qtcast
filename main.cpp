#include <QDir>
#include <QString>
#include <QtGui/QApplication>
#include <QLibrary>

#include "QsLog.h"
#include "QsLogDest.h"

#include "qtcast.h"

#include <fmod.hpp>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QsLogging::Logger& logger = QsLogging::Logger::instance();
    logger.setLoggingLevel(QsLogging::DebugLevel);
    const QString sLogPath(QDir(a.applicationDirPath()).filePath( "QtCast.log" ));
    QsLogging::DestinationPtr fileDestination(
        QsLogging::DestinationFactory::MakeFileDestination(sLogPath) );
    QsLogging::DestinationPtr debugDestination(
        QsLogging::DestinationFactory::MakeDebugOutputDestination() );
    logger.addDestination(debugDestination.get());
    logger.addDestination(fileDestination.get());

    //QLOG_INFO() << "Initializing Qt application.";
    QLOG_DEBUG() << "Initializing Qt application.";

    //    listDevices();
    QtCast w;
    w.show();
    return a.exec();
}
