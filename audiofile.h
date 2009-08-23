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

private:
    QString title;
    QString artist;
    QString duration;

    /* Objects for Metadata reading */
    GstElement *pipeline, *source, *decodebin;
    GstBus *bus;

    void MakeDecodingPipeline();
    gboolean MessageLoop( GstElement * element, GstTagList ** tags );
    void PrintTag( const GstTagList * list, const gchar * tag, gpointer unused );
    void InitVars();
};

#endif // AUDIOFILE_H
