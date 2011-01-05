#include <QDir>
#include <QString>
#include <QtGui/QApplication>
#include <QLibrary>

#include "QsLog.h"
#include "QsLogDest.h"

#include "qtcast.h"

#include <fmod.hpp>

int initFmod_win32()
{
    FMOD::System *system;
    FMOD_RESULT result;
    unsigned int version;
    int numdrivers;
    FMOD_SPEAKERMODE speakermode;
    FMOD_CAPS caps;
    char name[256];
    /*
    Create a System object and initialize.
    */
    result = FMOD::System_Create(&system);
    //ERRCHECK(result);
    result = system->getVersion(&version);
    //ERRCHECK(result);
    if (version < FMOD_VERSION)
    {
        printf("Error! You are using an old version of FMOD %08x. This program requires %08x\n", version, FMOD_VERSION);
        return 0;
    }
        result = system->getNumDrivers(&numdrivers);
        //ERRCHECK(result);
    if (numdrivers == 0)
    {
        result = system->setOutput(FMOD_OUTPUTTYPE_NOSOUND);
        //ERRCHECK(result);
    }
    else
    {
        result = system->getDriverCaps(0, &caps, 0, 0, &speakermode);
        //ERRCHECK(result);
        /*
        Set the user selected speaker mode.
        */
        result = system->setSpeakerMode(speakermode);
        //ERRCHECK(result);
        if (caps & FMOD_CAPS_HARDWARE_EMULATED)
        {
        /*
        The user has the 'Acceleration' slider set to off! This is really bad
        for latency! You might want to warn the user about this.
        */
        result = system->setDSPBufferSize(1024, 10);
        //ERRCHECK(result);
    }
    result = system->getDriverInfo(0, name, 256, 0);
    //ERRCHECK(result);
    if (strstr(name, "SigmaTel"))
    {
        /*
        Sigmatel sound devices crackle for some reason if the format is PCM 16bit.
        PCM floating point output seems to solve it.
        */
        result = system->setSoftwareFormat(48000, FMOD_SOUND_FORMAT_PCMFLOAT, 0,0, FMOD_DSP_RESAMPLER_LINEAR);
        //ERRCHECK(result);
        }
        }
        result = system->init(100, FMOD_INIT_NORMAL, 0);
        if (result == FMOD_ERR_OUTPUT_CREATEBUFFER)
        {
        /*
        Ok, the speaker mode selected isn't supported by this soundcard. Switch it
        back to stereo...
        */
        result = system->setSpeakerMode(FMOD_SPEAKERMODE_STEREO);
        //ERRCHECK(result);
        /*
        ... and re-init.
        */
        result = system->init(100, FMOD_INIT_NORMAL, 0);
        //ERRCHECK(result);
    }

}

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

    QLibrary fmodLib;

    fmodLib.setFileName( "fmodex" );
    fmodLib.load();
    if( !fmodLib.isLoaded() )
    {
        QLOG_DEBUG() << "FMOD Ex DLL not loaded!";
        return -1;
    }

    QtCast w;
    w.show();
    return a.exec();
}
