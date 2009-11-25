#ifndef AUDIOFILEMETA_H
#define AUDIOFILEMETA_H

#include <QVariant>
#include <QString>

class AudioFileMeta
{
    Q_OBJECT

public:
    AudioFileMeta();

    QString filename;
    QString title;
    QString artist;
    QString album;
    /* QString duration; */

    unsigned int  mins, secs;
private:
};

#endif // AUDIOFILEMETA_H
