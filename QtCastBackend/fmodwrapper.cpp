#include <fmod.hpp>

#include "fmodwrapper.h"

FmodWrapper::FmodWrapper(QObject *parent) :
    QObject(parent)
{
}

int FmodWrapper::initFmodWin32()
{
    FMOD_RESULT result;
    FMOD_SPEAKERMODE speakermode;
    FMOD_CAPS caps;
    char name[256];
    /*
    Create a System object and initialize.
    */
    result = FMOD::System_Create(&fmodSystem);
    //ERRCHECK(result);
    result = fmodSystem->getVersion(&fmodVersion);
    //ERRCHECK(result);
    if (fmodVersion < FMOD_VERSION)
    {
        printf("Error! You are using an old version of FMOD %08x. This program requires %08x\n", fmodVersion, FMOD_VERSION);
        return 0;
    }
        result = fmodSystem->getNumDrivers(&fmodNumDrivers);
        //ERRCHECK(result);
    if (fmodNumDrivers == 0)
    {
        result = fmodSystem->setOutput(FMOD_OUTPUTTYPE_NOSOUND);
        //ERRCHECK(result);
    }
    else
    {
        result = fmodSystem->getDriverCaps(0, &caps, 0, 0, &speakermode);
        //ERRCHECK(result);
        /*
        Set the user selected speaker mode.
        */
        result = fmodSystem->setSpeakerMode(speakermode);
        //ERRCHECK(result);
        if (caps & FMOD_CAPS_HARDWARE_EMULATED)
        {
        /*
        The user has the 'Acceleration' slider set to off! This is really bad
        for latency! You might want to warn the user about this.
        */
        result = fmodSystem->setDSPBufferSize(1024, 10);
        //ERRCHECK(result);
    }
    result = fmodSystem->getDriverInfo(0, name, 256, 0);
    //ERRCHECK(result);
    if (strstr(name, "SigmaTel"))
    {
        /*
        Sigmatel sound devices crackle for some reason if the format is PCM 16bit.
        PCM floating point output seems to solve it.
        */
        result = fmodSystem->setSoftwareFormat(48000, FMOD_SOUND_FORMAT_PCMFLOAT, 0,0, FMOD_DSP_RESAMPLER_LINEAR);
        //ERRCHECK(result);
        }
        }
        result = fmodSystem->init(100, FMOD_INIT_NORMAL, 0);
        if (result == FMOD_ERR_OUTPUT_CREATEBUFFER)
        {
        /*
        Ok, the speaker mode selected isn't supported by this soundcard. Switch it
        back to stereo...
        */
        result = fmodSystem->setSpeakerMode(FMOD_SPEAKERMODE_STEREO);
        //ERRCHECK(result);
        /*
        ... and re-init.
        */
        result = fmodSystem->init(100, FMOD_INIT_NORMAL, 0);
        //ERRCHECK(result);
    }

}
