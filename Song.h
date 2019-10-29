//DOCUMENT HERE

#ifndef SONG_H
#define SONG_H
#include <string>
#include <iostream>
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
    Song(string artist, string name, int size);

    string getName() const
    {   return name;};

    void setName(string n)
    {   name=n; };

    string getArtist() const
    {   return artist;};

    int getSize() const
    {   return size;};

    //ostream& operator << (ostream& out, const Song &song);
    bool operator==(const Song &rhsSong);

    ~Song();
};

ostream& operator << (ostream& out, const Song &song);


#endif
