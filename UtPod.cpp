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
    if(s.getSize()>getRemainingMemory()){
        cout << "There is not enough memory to store '" << s.getName() << " by " << s.getArtist() << " (" << s.getSize() << "MB)'" << endl;
        return -1;
    }
    SongNode* newNode= new SongNode;
    newNode->s=s;
    newNode->next=songs;
    songs=newNode;
    return 0;
    }


    int UtPod::removeSong(Song const &s){
    SongNode* current=songs;
    SongNode* previous=NULL;

    while(current!=NULL){
        if((current->s==s)&&(current!=songs)){
            previous->next=current->next;
            delete(current);
            return 0;
        }
        if((current->s==s)&&(current==songs)){
            songs=current->next;
            delete(current);
            return 0;
        }
        previous=current;
        current=current->next;
    }
    return -1;
    }


    void UtPod::shuffle(){

    }


    void UtPod::showSongList(){

    SongNode* node=songs;
    while(node!=NULL){
        Song song=node->s;
        cout << song << endl;
        node=node->next;
    }
    }


    void UtPod::sortSongList(){

    }


    void UtPod::clearMemory() {
    SongNode *current;
    SongNode *previous;
    while(songs->next!=NULL){
        current=songs;
        previous=NULL;
        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }
        previous->next = NULL;
        delete (current);
    }
    delete(songs);
    songs=NULL;
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

