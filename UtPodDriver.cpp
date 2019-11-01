/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"
#include "time.h"



using namespace std;

int main(int argc, char *argv[])
{
    UtPod t(50);

    Song s1("Beatles", "Aey Jude1", 4);

    cout << "Test removing from empty library" << endl;
    int result= t.removeSong(s1);
    cout << "result = " << result << endl;
    cout << "\nTest clearing an empty library" << endl;
    t.clearMemory();
    cout << "\nTest showing empty library" << endl;
    t.showSongList();
    cout << "\nTest sorting empty library" << endl;
    t.sortSongList();
    t.showSongList();
    cout << "\nTest shuffling empty library" << endl;
    t.shuffle();
    t.showSongList();

    cout << "\nTesting addSong" << endl;
    result = t.addSong(s1);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;
    t.showSongList();

    cout << "\nTest sorting single entry library" << endl;
    t.sortSongList();
    t.showSongList();
    cout << "\nTest shuffling single entry library" << endl;
    t.shuffle();
    t.showSongList();
    cout << "\nAdding 8 more songs- 9 total"  << endl;
    Song s2("Ceatles", "Bey Jude1", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;
    t.showSongList();

    Song s3("Beatles", "Cey Jude1", 1);
    result = t.addSong(s3);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s4("Beatles", "Dey Jude1", 4);
    result = t.addSong(s4);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s5("Beatles", "Eey Jude1", 1);
    result = t.addSong(s5);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s6("Geatles", "Aey Jude1", 9);
    result = t.addSong(s6);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s7("Geatles", "Aey Jude1", 1);
    result = t.addSong(s7);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s8("Geatles", "Bey Jude1", 10);
    result = t.addSong(s8);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    Song s9("Geatles", "Bey Jude1", 15);
    result = t.addSong(s9);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    t.showSongList();

    cout << "\nTest adding song that is too large" << endl;
    Song s10("Geatles", "Bey Jude1", 150);
    result = t.addSong(s10);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;

    t.showSongList();
    cout << "\nTest sorting the library" << endl;
    t.sortSongList();
    t.showSongList();
    cout << "\nTest shuffling library twice to see variation" << endl;
    t.shuffle();
    t.showSongList();
    cout << endl;
    t.shuffle();
    t.showSongList();
    cout << "\nTest remove twice" << endl;
    t.removeSong(s9);
    t.showSongList();

    t.removeSong(s1);
    cout << "\n" << endl;
    t.showSongList();

    cout<< "\nTest sorting modified and shuffled library" << endl;
    t.sortSongList();
    t.showSongList();

    cout << "\nTest clearing an in use library" << endl;
    t.clearMemory();
    t.showSongList();

    return 0;
}

