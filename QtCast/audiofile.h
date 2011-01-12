#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include "audiofilemeta.h"
#include "QtCast.h"

#include <QString>
#include <fmod.hpp>

class AudioFile
{
public:
    AudioFile( FMOD::System *fmodSystem );
    AudioFile( FMOD::System *fmodSystem, QString filename );
    void Open( QString filename );
    void Close( );

    QString Filename();
    QString Title();
    QString Artist();
    QString Album();
    QString Duration();
    AudioFileMeta Meta() const;

private:
    AudioFileMeta meta;
    FMOD::Sound *fmodSound;
    FMOD::System *fmodSystem;

    void outputFmodTagType( const FMOD_TAG &tag );
    void outputFmodTagDataType( const FMOD_TAG &tag );
    void outputFmodTag( const FMOD_TAG &tag );

    /* Objects for Metadata reading */
    void InitVars();
};

#endif // AUDIOFILE_H
