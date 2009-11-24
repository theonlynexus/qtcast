#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include <QString>

#include <gst/gst.h>
#include <glib.h>

class AudioFile
{
public:
    AudioFile();
    AudioFile( QString filename );
    void Open( QString filename );
    void Close( );

    QString Filename();
    QString Title();
    QString Artist();
    QString Album();
    QString Duration();

private:
    QString filename;
    QString title;
    QString artist;
    QString album;
    /* QString duration; */

    unsigned int  mins, secs;

    /* Objects for Metadata reading */
    GstElement *pipeline, *source, *decodebin, *fakesink;
    GstBus *bus;

    void MakeDecodingPipeline();
    gboolean MessageLoop( GstElement * element, GstTagList ** tags );
    void PrintTag( const GstTagList * list, const gchar * tag, gpointer unused );
    void InitVars();
};

#endif // AUDIOFILE_H
