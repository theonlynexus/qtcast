#include "audiofile.h"

#include <glib-object.h>
#include <QMessageBox>

/* C++ program, so Pantheios init is automatic! */
#include <pantheios/pantheios.hpp>
#include <pantheios/frontends/fe.simple.h>
#include <pantheios/inserters/integer.hpp>

AudioFile::AudioFile()
{
    InitVars();
}

AudioFile::AudioFile( QString filename )
{
    InitVars();
    MakeDecodingPipeline();

    this->Open( filename );
}

void AudioFile::InitVars()
{
    pipeline = NULL;
    source = NULL;
    decodebin = NULL;
    bus = NULL;
}

void AudioFile::Open( QString filename )
{
    GstStateChangeReturn sret;
    GstState state;
    GstTagList *tags = NULL;

    this->filename = filename;

    pantheios::log_DEBUG( "AudioFile::Open( ", filename.toLocal8Bit().constData(), " )"  );

    g_object_set( source, "location", filename.toLocal8Bit().constData(), NULL );

    /* Decodebin will only commit to PAUSED if it actually finds a type;
     * otherwise the state change fails */
    pantheios::log_DEBUG( "AudioFile::Open - Setting pipeline to GST_STATE_PAUSED"  );
    sret = gst_element_set_state (GST_ELEMENT (pipeline), GST_STATE_PAUSED);

    unsigned short int nTries = 0;
    switch( sret )
    {
        case GST_STATE_CHANGE_ASYNC:
            pantheios::log_DEBUG( "AudioFile::Open - GST_STATE_CHANGE_ASYNC"  );
            while( ( GST_STATE_CHANGE_ASYNC == ( sret = gst_element_get_state(
                                                 GST_ELEMENT( pipeline ), &state, NULL,
                                                 5 * GST_SECOND ) ) )
                   && ( nTries < 4 ) )
            {
                pantheios::log_DEBUG( "AudioFile::Open - GST_STATE_CHANGE_ASYNC"  );
                nTries++;
            }
            switch( sret )
            {
                case GST_STATE_CHANGE_SUCCESS:
                    pantheios::log_DEBUG( "AudioFile::Open - GST_STATE_CHANGE_SUCCESS"  );
                    break;
                default:
                    pantheios::log_DEBUG( "AudioFile::Open - Could not read file. Aborting."  );
                    QMessageBox::critical( 0, "File read error.", "Could not read selected audio file" );
                    return;
            }
            break;
        case GST_STATE_CHANGE_SUCCESS:
            pantheios::log_DEBUG( "AudioFile::Open - GST_STATE_CHANGE_SUCCESS"  );
            break;
        default:
            pantheios::log_DEBUG( "AudioFile::Open - Could not read file. Aborting."  );
            QMessageBox::critical( 0, "File read error.", "Could not read selected audio file" );
            return;
    }

    if ( !MessageLoop( GST_ELEMENT( pipeline ), &tags ) )
    {
      pantheios::log_ERROR( "AudioFile::Open - Impossible error!"  );
    }

    if ( tags )
    {
      const GValue *tagVal = NULL;
      tagVal = gst_tag_list_get_value_index( tags, GST_TAG_TITLE, 0 );
      if( tagVal )
      {
          title += g_value_get_string( tagVal );
          pantheios::log_DEBUG( "AudioFile::Open - Title tag: ", title.toLocal8Bit().constData()  );
      }
      else
      {
          pantheios::log_DEBUG( "AudioFile::Open - No Title tag");
      }

      tagVal = gst_tag_list_get_value_index( tags, GST_TAG_ALBUM, 0 );
      if( tagVal )
      {
          album += g_value_get_string( tagVal );
          pantheios::log_DEBUG( "AudioFile::Open - Album tag: ", album.toLocal8Bit().constData()  );
      }
      else
      {
          pantheios::log_DEBUG( "AudioFile::Open - No Album tag");
      }

      tagVal = gst_tag_list_get_value_index( tags, GST_TAG_ARTIST, 0 );
      if( tagVal )
      {
          artist += g_value_get_string( tagVal );
          pantheios::log_DEBUG( "AudioFile::Open - Artist tag: ", artist.toLocal8Bit().constData()  );
      }
      else
      {
          pantheios::log_DEBUG( "AudioFile::Open - No Artist tag");
      }

      pantheios::log_DEBUG( "AudioFile::Open - Changing pipeline state to GST_STATE_PLAYING");
      sret = gst_element_set_state (GST_ELEMENT (pipeline), GST_STATE_PLAYING);
      if ( GST_STATE_CHANGE_ASYNC == sret )
      {
        if( GST_STATE_CHANGE_SUCCESS !=
          gst_element_get_state( GST_ELEMENT( pipeline ), &state, NULL,
              5 * GST_SECOND ) )
        {
          pantheios::log_DEBUG( "AudioFile::Open - State change failed. Aborting."  );
          return;
        }
      }

      tagVal = gst_tag_list_get_value_index( tags, GST_TAG_DURATION, 0 );
      if( tagVal )
      {
          gint64 nanosecs = g_value_get_int64( tagVal );
          secs = nanosecs / 1000000;
          mins = secs / 60;
          secs = secs % 60;
          pantheios::log_DEBUG( "AudioFile::Open - Duration tag: ",
                                pantheios::integer(mins),":",
                                pantheios::integer(secs)  );
      }
      else
      {
          pantheios::log_DEBUG( "AudioFile::Open - No Duration tag");
      }

      /* gst_tag_list_foreach( tags, &AudioFile::PrintTag, NULL );*/
      gst_tag_list_free( tags );
      tags = NULL;
    }
    else
    {
        printf( "No metadata found for %s\n", filename.toLocal8Bit().constData() );
        fflush(stdout);
    }

    GstQuery *query;
    gboolean res;
    query = gst_query_new_duration (GST_FORMAT_TIME);
    res = gst_element_query( (GstElement*)pipeline, query);
    if( res )
    {
        gint64 duration;
        secs = duration / 1000000;
        mins = secs / 60;
        secs = secs % 60;

        gst_query_parse_duration (query, NULL, &duration);
        pantheios::log_DEBUG( "AudioFile::Open - gst_element_query_duration: ",
                             pantheios::integer(mins), ":",
                             pantheios::integer(secs) );
    }
    else
    {
        pantheios::log_DEBUG( "AudioFile::Open - Duration query failed...");
    }
    gst_query_unref (query);


//    /* gboolean gst_element_query_duration (GstElement *element, GstFormat *format, gint64 *duration); */
//    gint64 nanosecs;
//    GstFormat format = GST_FORMAT_TIME;
//
//    if( TRUE == gst_element_query_duration( (GstElement*)pipeline, &format, &nanosecs ) )
//    {
//      if( format != GST_FORMAT_TIME )
//      {
//          pantheios::log_DEBUG( "AudioFile::Open - Could not get time in format GST_FORMAT_TIME.");
//      }
//      else
//      {
//          secs = nanosecs / 1000000;
//          mins = secs / 60;
//          secs = secs % 60;
//          pantheios::log_DEBUG( "AudioFile::Open - gst_element_query_duration: ",
//                                pantheios::integer(mins),":",
//                                pantheios::integer(secs)  );
//      }
//    }
//    else
//    {
//      pantheios::log_DEBUG( "AudioFile::Open - Could not get time al all.");
//    }

    /* Finished reading tags, so set state to NULL */
    sret = gst_element_set_state( GST_ELEMENT (pipeline), GST_STATE_NULL );
}

void AudioFile::Close( )
{
    g_print( "Deleting pipeline\n" );
    gst_object_unref (GST_OBJECT (pipeline));
}

void AudioFile::MakeDecodingPipeline()
{
  if( pipeline != NULL )
    gst_object_unref (pipeline);

  pipeline = gst_pipeline_new( NULL );

  source = gst_element_factory_make ( "filesrc", "source" );
  g_assert( GST_IS_ELEMENT( source) );
  decodebin = gst_element_factory_make ("decodebin", "decodebin");
  g_assert( GST_IS_ELEMENT( decodebin ) );
//  fakesink = gst_element_factory_make ("fakesink", "fakesink");
//  g_assert( GST_IS_ELEMENT( fakesink ) );

//  gst_bin_add_many( GST_BIN( pipeline ), source, decodebin, fakesink, NULL );
  gst_bin_add_many( GST_BIN( pipeline ), source, decodebin, NULL );
  gst_element_link( source, decodebin );
}

gboolean AudioFile::MessageLoop( GstElement * element, GstTagList ** tags )
{
    GstBus *bus;
    gboolean done = FALSE;

    bus = gst_element_get_bus (element);
    g_return_val_if_fail (bus != NULL, FALSE);
    g_return_val_if_fail (tags != NULL, FALSE);

    while (!done)
    {
        GstMessage *message;

        message = gst_bus_pop (bus);
        if (message == NULL)
        /* All messages read, we're done */
        break;

        switch (GST_MESSAGE_TYPE (message))
        {
        case GST_MESSAGE_ERROR:
        case GST_MESSAGE_EOS:
            gst_message_unref (message);
            return TRUE;
        case GST_MESSAGE_TAG:
            {
                GstTagList *new_tags, *old_tags;

                gst_message_parse_tag( message, &new_tags );
                if ( *tags )
                {
                    old_tags = *tags;
                    *tags = gst_tag_list_merge( old_tags, new_tags, GST_TAG_MERGE_KEEP);
                    gst_tag_list_free( old_tags );
                }
                else
                    *tags = new_tags;
                break;
            }
        default:
            break;
        }
        gst_message_unref( message );
    }
    gst_object_unref( bus );
    return TRUE;
}

void AudioFile::PrintTag( const GstTagList * list, const gchar * tag, gpointer unused )
{
  gint i, count;

  count = gst_tag_list_get_tag_size (list, tag);

  for (i = 0; i < count; i++) {
    gchar *str;

    if (gst_tag_get_type (tag) == G_TYPE_STRING)
    {
      if( !gst_tag_list_get_string_index (list, tag, i, &str) )
        g_assert_not_reached ();
    }
    else
    {
      str = g_strdup_value_contents (gst_tag_list_get_value_index (list, tag, i));
    }

    if (i == 0)
    {
      g_print ("  %15s: %s\n", gst_tag_get_nick (tag), str);
    }
    else
    {
      g_print ("                 : %s\n", str);
    }

    g_free (str);
  }
}
