//
// Created by Owner on 10/22/2019.
//
#include "UtPod.h"
#include <iostream>


    UtPod::UtPod(){
    songs=NULL;
    memSize=0;
    }

    UtPod::UtPod(int _memsize){
    memSize=_memsize;
    songs=NULL;
    }

    int UtPod::addSong(Song const &s){
    SongNode* newNode= new SongNode;
    newNode->s=s;
    newNode->next=songs;
    songs=newNode;
    return 0;
    }


    int UtPod::removeSong(Song const &s){
    return 0;
    }


    void UtPod::shuffle(){

    }


    void UtPod::showSongList(){
   /*
    SongNode* node=songs;
    while(node!=NULL){
        Song song=node->s;
        cout << song << endl;
        node=node->next;
    }
    */
    }


    void UtPod::sortSongList(){

    }


    void UtPod::clearMemory(){

    }


    int UtPod::getRemainingMemory(){
    SongNode* node=songs;
    int usedMemory=0;
    while(node!=NULL){
        usedMemory+=node->s.getSize();
        node=node->next;
    }
    return memSize-usedMemory;
    }


    UtPod::~UtPod() {

    }

