//
// Created by Owner on 10/22/2019.
//
#include "Song.h"
#include <iostream>
using namespace std;

int main1(int argc, char *argv[]){
    Song s1( "Brittany Spears", "Toxic",20);
    Song s2("Brittany Spears", "Uoxic", 20);
    Song s3( "Crittany Spears", "Toxic",20);
    Song s4( "Brittany Spears", "Toxic",30);
    Song s5( "Brittany Spears","Soxic", 20);
    if(s1>s3){
        cout << s1 << "is greater than" << s3 << endl;
    }else{
        if(s3>s1) {
            cout << s3 << "is greater than" << s1 << endl;
        }
    }

    return 0;
}