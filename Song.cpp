//
// Created by Owner on 10/22/2019.
//

#include "Song.h"
#include <iostream>

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


    Song::Song(string _artist, string _name, int _size) {
    name=_name;
    artist=_artist;
    size=_size;
    }
/*
    ostream& operator << (ostream& out, const Song &song)
    {
    out << song.getName() << " by " << song.getArtist() << " (" << song.getSize() << "MB)";
    return out;
    }
*/


bool Song::operator==(const Song &rhsSong){
    if((this->getName()==rhsSong.getName())&&(this->getArtist()==rhsSong.getArtist())&&(this->getSize()==rhsSong.getSize())){
        return true;
    }
    return false;
}
ostream& operator << (ostream& out, const Song &song){
    out << song.getName() << " by " << song.getArtist() << " (" << song.getSize() << "MB)";
    return out;
}

    Song::~Song() {

    }



