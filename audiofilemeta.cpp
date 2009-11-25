#include "audiofilemeta.h"

AudioFileMeta::AudioFileMeta()
{
}

AudioFileMeta::AudioFileMeta( const AudioFileMeta &src )
{
    title = src.title;
    artist = src.artist;
    album = src.album;
    filename = src.filename;
    secs= src.secs;
    mins = src.mins;
}
