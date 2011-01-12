#include "audiofile.h"
#include "QtCast.h"

#include "QsLog.h"

#include <QMessageBox>

#include <fmod.hpp>

AudioFile::AudioFile( FMOD::System *fmodSystem )
{
    this->fmodSystem = fmodSystem;
}

AudioFile::AudioFile( FMOD::System *fmodSystem, QString filename )
{
    this->fmodSystem = fmodSystem;
    meta.filename = filename;

    InitVars();
}

void AudioFile::InitVars()
{
    fmodSystem->createSound( meta.filename.toLocal8Bit(), FMOD_CREATESTREAM, 0x0, &fmodSound );
    unsigned int length;
    fmodSound->getLength( &length, FMOD_TIMEUNIT_MS  );
    meta.duration.setHMS( 0,0,0,0 );
    meta.duration = meta.duration.addMSecs( length );
    QLOG_DEBUG() << "Meta.duration.time(): " << meta.duration.toString();
    QLOG_DEBUG() << "FMOD Sound Length: " << length << " ms";
    char name[256];
    fmodSound->getName( name, 256 );

    QLOG_DEBUG() << "FMOD Sound Name: " << name;

    char titleTag[] ="TITLE";
    char artistTag[] ="ARTIST";
    FMOD_TAG tag;

    while( FMOD_ERR_TAGNOTFOUND != fmodSound->getTag( 0x0, -1, &tag ) &&
           tag.updated )
    {
        outputFmodTag( tag );
    }
}

void AudioFile::outputFmodTagType( const FMOD_TAG &tag )
{
    switch( tag.type )
    {
    case FMOD_TAGTYPE_UNKNOWN:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_UNKNOWN";
        break;
    case FMOD_TAGTYPE_ID3V1:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_ID3V1";
        break;
    case FMOD_TAGTYPE_ID3V2:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_ID3V2";
        break;
    case FMOD_TAGTYPE_VORBISCOMMENT:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_VORBISCOMMENT";
        break;
    case FMOD_TAGTYPE_SHOUTCAST:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_SHOUTCAST";
        break;
    case FMOD_TAGTYPE_ICECAST:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_ICECAST";
        break;
    case FMOD_TAGTYPE_ASF:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_ASF";
        break;
    case FMOD_TAGTYPE_MIDI:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_MIDI";
        break;
    case FMOD_TAGTYPE_PLAYLIST:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_PLAYLIST";
        break;
    case FMOD_TAGTYPE_FMOD:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_FMOD";
        break;
    case FMOD_TAGTYPE_USER:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_USER";
        break;
    case FMOD_TAGTYPE_MAX:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGTYPE_MAX";
        break;
    }
}

void AudioFile::outputFmodTagDataType( const FMOD_TAG &tag )
{
    switch( tag.datatype )
    {
    case FMOD_TAGDATATYPE_BINARY:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_BINARY";
        break;
    case FMOD_TAGDATATYPE_INT:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_INT";
        break;
    case FMOD_TAGDATATYPE_FLOAT:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_FLOAT";
        break;
    case FMOD_TAGDATATYPE_STRING:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_STRING";
        break;
    case FMOD_TAGDATATYPE_STRING_UTF16:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_STRING_UTF16";
        break;
    case FMOD_TAGDATATYPE_STRING_UTF16BE:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_STRING_UTF16BE";
        break;
    case FMOD_TAGDATATYPE_STRING_UTF8:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_STRING_UTF8";
        break;
    case FMOD_TAGDATATYPE_CDTOC:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_BINARY";
        break;
    case FMOD_TAGDATATYPE_MAX:
        QLOG_DEBUG() << "Tag data type: FMOD_TAGDATATYPE_MAX";
        break;
    }
}

void AudioFile::outputFmodTag( const FMOD_TAG &tag )
{
    char name[256];

    QLOG_DEBUG() << "FMOD Sound Tag";
    outputFmodTagType( tag );
    QLOG_DEBUG() << "Tag name: " << tag.name;
    outputFmodTagDataType( tag );
    QLOG_DEBUG() << "Tag data length: " << tag.datalen;
    if( FMOD_TAGDATATYPE_STRING == tag.datatype )
    {
        memcpy( name, tag.data, tag.datalen );
        name[tag.datalen]='\0';
        QLOG_DEBUG() << "Tag contents: " << name;
    }
}

QString AudioFile::Filename()
{ return meta.filename; }

QString AudioFile::Title()

{ return meta.title; }

QString AudioFile::Artist()
{ return meta.artist; }

QString AudioFile::Album()
{ return meta.album; }

QString AudioFile::Duration()
{ return "Cippa"; }

AudioFileMeta AudioFile::Meta() const
{ return meta; }

void AudioFile::Open( QString filename )
{

}

void AudioFile::Close( )
{

}
