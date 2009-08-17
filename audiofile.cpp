#include "audiofile.h"

#include <gst/gst.h>
#include <glib.h>

AudioFile::AudioFile()
{
}

AudioFile::AudioFile( QString filename )
{
    GstElement *pipeline, *source, *tagreader, *sink;
    GstBus *bus;

    pipeline = gst_pipeline_new ("tag-reader-pipe");
    source = gst_element_factory_make ("filesrc", "file-source");
    tagreader = gst_element_factory_make ("oggdemux", "ogg-demuxer");
    sink = gst_element_factory_make ("autoaudiosink", "audio-output");


    g_print ("Deleting pipeline\n");
    gst_object_unref (GST_OBJECT (pipeline));
}

void AudioFile::Open( QString filename )
{
}

void AudioFile::Close( )
{
}
