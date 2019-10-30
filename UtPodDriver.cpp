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
    int result = t.addSong(s1);
    //cout << s1 << endl;
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;
    t.showSongList();

    Song s2("Ceatles", "Bey Jude1", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;
    t.showSongList();

    //t.clearMemory();
    //cout << "remaining memory after clear= " << t.getRemainingMemory() << endl;

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
/*
    Song s5("Beatles", "Hey Jude6", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    result = t.getRemainingMemory();
    cout << "remaining memory = " << result << endl;
*/
    t.showSongList();
    t.sortSongList();
    cout << "\n" << endl;
    t.showSongList();
    cout << "\n" << endl;
    t.shuffle();
    t.showSongList();
    cout << "\n" << endl;
    cout << "test remove" << endl;
    t.removeSong(s9);
    cout << "\n" << endl;
    t.showSongList();

    t.removeSong(s1);
    cout << "\n" << endl;
    t.showSongList();
    cout << "\n" << endl;
    t.sortSongList();
    t.showSongList();
    cout << "\n" << endl;
    t.shuffle();
    t.showSongList();

/*
    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "remaining memory = " << t.getRemainingMemory() << endl;

    t.clearMemory();
    cout << "remaining memory after clear= " << t.getRemainingMemory() << endl;
*/
    return 0;
}

