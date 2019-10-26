//DOCUMENT HERE

#ifndef SONG_H
#define SONG_H
#include "Song.h"
#include <string>
using namespace std;

//Song class declaration
class Song {
private:
    string name;
    string artist;
    int size;
public:
    Song();
    Song(string name);
    Song(string name, string artist, int size);

    string getName() const
    {   return name;};

    void setName(string n)
    {   name=n; };

    string getArtist() const
    {   return artist;};

    int getSize() const
    {   return size;};

    //ostream& operator << (ostream& out, const Song song);

    ~Song();
};

#endif
