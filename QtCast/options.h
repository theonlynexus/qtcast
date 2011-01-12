#ifndef OPTIONS_H
#define OPTIONS_H

#include <QBool>
#include <QVariant>

class Options
{
public:
    Options();

    enum OUT_PLUGIN
    {
        OUT_ALSA,
        OUT_PULSE,
        OUT_WDM
    };

    enum AUDIO_FREQ
    {
        FREQ_22050,
        FREQ_44100,
        FREQ_48000,
        FREQ_96000
    };

private:
    OUT_PLUGIN outPlugin;
    AUDIO_FREQ sampleFreq;
    AUDIO_FREQ pipelineFreq;
};

Q_DECLARE_METATYPE(Options);

#endif // OPTIONS_H
