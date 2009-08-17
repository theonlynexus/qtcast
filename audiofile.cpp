#include "audiofile.h"

#include <gst/gst.h>
#include <glib.h>

AudioFile::AudioFile()
{
}

AudioFile::AudioFile( QString filename )
{
    GstElement *pipeline, *source, *decodebin, *sink;
    GstBus *bus;

    makeDecodingPipeline();

    this->Open( fileName );
}

void AudioFile::Open( QString filename )
{
    g_object_set( source, "location", filename.constData(), NULL );
}

void AudioFile::Close( )
{
    g_print( "Deleting pipeline\n" );
    gst_object_unref (GST_OBJECT (pipeline));
}

void AudioFile::MakeDecodingPipeline()
{
  GstElement *decodebin;

  if( pipeline != NULL )
    gst_object_unref (pipeline);

  pipeline = gst_pipeline_new( NULL );

  source = gst_element_factory_make ( "filesrc", "source" );
  g_assert( GST_IS_ELEMENT( source) );
  decodebin = gst_element_factory_make ("decodebin", "decodebin");
  g_assert( GST_IS_ELEMENT( decodebin ) );

  gst_bin_add_many( GST_BIN( pipeline ), source, decodebin, NULL );
  gst_element_link( source, decodebin );
}
