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
    // Default and basic constructors that we dont use
    Song();
    Song(string name);
    // Constructor that assigns the name artist and size of a song
    Song(string artist, string name, int size);

    // Returns the name of a song
    string getName() const
    {   return name;};
    // Writes the name input to the private variable of a song
    void setName(string n)
    {   name=n; };
    // Returns a song's artist
    string getArtist() const
    {   return artist;};
    // Returns a songs size
    int getSize() const
    {   return size;};
    // Sets comparison procedure for seeing if two songs are ==
    bool operator==(const Song &rhsSong);
    // Defines what makes a song bigger than another
    bool operator>(const Song &rhsSong);
    // Deconstructs songs
    ~Song();
};
// Allows a song to be used in cout
ostream& operator << (ostream& out, const Song &song);


#endif
