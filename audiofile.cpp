#include "audiofile.h"
#include "QtCast.h"

#include <QMessageBox>

#include <fmod.hpp>

AudioFile::AudioFile( )
{
}

AudioFile::AudioFile( QString filename )
{
    meta.filename = filename;

    InitVars();
}

void AudioFile::InitVars()
{
    QtCast::fmodCreateSound( meta.filename, FMOD_CREATESTREAM, 0x0, &fmodSound );
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
