#include "audiofile.h"

#include <QMessageBox>

AudioFile::AudioFile()
{
    InitVars();
}

AudioFile::AudioFile( QString filename )
{
    InitVars();

    this->Open( filename );
}

void AudioFile::InitVars()
{

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
