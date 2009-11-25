#ifndef AUDIOFILEMETA_H
#define AUDIOFILEMETA_H

#include <QVariant>
#include <QString>
#include <QObject>

class AudioFileMeta
{
public:
    AudioFileMeta();
    AudioFileMeta( const AudioFileMeta &src );

    QString filename;
    QString title;
    QString artist;
    QString album;
    /* QString duration; */

    unsigned int  mins, secs;

private:
};

Q_DECLARE_METATYPE(AudioFileMeta)

#endif // AUDIOFILEMETA_H
