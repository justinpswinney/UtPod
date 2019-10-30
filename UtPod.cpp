//
// Created by Owner on 10/22/2019.
//
#include "UtPod.h"
#include <iostream>
#include "time.h"


    UtPod::UtPod(){
    songs=NULL;
    memSize=0;
    srand(time(0));
    }

    UtPod::UtPod(int _memsize){
    memSize=_memsize;
    songs=NULL;
    srand(time(0));
    }

    int UtPod::addSong(Song const &s){
    if(s.getSize()>getRemainingMemory()){
        cout << "There is not enough memory to store '" << s.getName() << " by " << s.getArtist() << " (" << s.getSize() << "MB)'" << endl;
        return NO_MEMORY;
    }
    SongNode* newNode= new SongNode;
    newNode->s=s;
    newNode->next=songs;
    songs=newNode;
    return SUCCESS;
    }


    int UtPod::removeSong(Song const &s){
    SongNode* current=songs;
    SongNode* previous=NULL;

    while(current!=NULL){
        if((current->s==s)&&(current!=songs)){
            previous->next=current->next;
            delete(current);
            return SUCCESS;
        }
        if((current->s==s)&&(current==songs)){
            songs=current->next;
            delete(current);
            return SUCCESS;
        }
        previous=current;
        current=current->next;
    }
    return NOT_FOUND;
    }


    void UtPod::shuffle() {

        int count = 0;
        SongNode *ptr1;
        SongNode *ptr2;
        ptr1 = songs;
        while (ptr1 != NULL) {
            count++;
            ptr1 = ptr1->next;
        }
        for (int j = 0; j < (2 * count); j++) {
            int n1 = rand() % count;
            int n2 = rand() % count;
            SongNode *ptr1 = songs;
            SongNode *ptr2 = songs;
            for (int i = 0; i < n1; i++) {
                ptr1 = ptr1->next;
            }
            for (int i = 0; i < n2; i++) {
                ptr2 = ptr2->next;
            }
            Song temp = ptr1->s;
            ptr1->s = ptr2->s;
            ptr2->s = temp;
        }
    }


    void UtPod::showSongList(){

    SongNode* node=songs;
    if(node==NULL){
        cout << "Cannot show song list: Song library is empty" << endl;
    }else {
        while (node != NULL) {
            Song song = node->s;
            cout << song << endl;
            node = node->next;
        }
    }
    }


    void UtPod::sortSongList(){
    SongNode *ptr=songs;
    SongNode *probe=songs->next;
    SongNode *smallest=songs->next;

    while(ptr!=NULL){
        smallest=ptr;
        while(probe!=NULL){
            if(smallest->s>probe->s){
                smallest=probe;
            }
            probe=probe->next;
        }

        Song temp=smallest->s;
        smallest->s=ptr->s;
        ptr->s=temp;
        ptr=ptr->next;
        if(ptr!=NULL) {
            probe = ptr->next;
        }
    }
    }


    void UtPod::clearMemory() {
    SongNode *current;
    SongNode *previous;
    if(songs==NULL){
        return;
    }
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

