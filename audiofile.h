#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include <QString>

class AudioFile
{
public:
    AudioFile();
    AudioFile( QString filename );
    void Open( QString filename );
    void Close( );

private:
    QString title;
    QString artist;
    QString duration;
};

#endif // AUDIOFILE_H
