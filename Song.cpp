//
// Created by Owner on 10/22/2019.
//

#include "Song.h"


    Song::Song() {
    name="";
    artist="";
    size=0;
    }


    Song::Song(string _name) {
    name=_name;
    artist="";
    size=0;
    }


    Song::Song(string _name, string _artist, int _size) {
    name=_name;
    artist=_artist;
    size=_size;
    }

    ostream& operator << (ostream& out, const Song song)
    {
    //out << song.getName() << " by " << song.getArtist() << " (" << song.getSize() << "MB)";
    return out;
    }


    Song::~Song() {

    }



