//
// Created by Owner on 10/22/2019.
//
#include "Song.h"
#include <iostream>
using namespace std;

int main1(int argc, char *argv[]){
    Song s1("Toxic");
    Song s2("How I Roll", "Brittany Spears", 20);
    cout << "Song 1 is " << s1.getName() << " by " << s1.getArtist() << " and is " << s1.getSize() << "MB" << endl;
    cout << "Song 2 is " << s2.getName() << " by " << s2.getArtist() << " and is " << s2.getSize() << "MB" << endl;

    return 0;
}