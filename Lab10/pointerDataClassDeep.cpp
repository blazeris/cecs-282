//
// Created by Nathan
//

#include "pointerDataClassDeep.h"

pointerDataClassDeep::pointerDataClassDeep(int size): maxSize(size) {
    p = new int[maxSize];
}

pointerDataClassDeep::pointerDataClassDeep(pointerDataClassDeep & other):
    maxSize(other.maxSize), length(other.length){
    p = new int[maxSize];
    for(int i = 0; i < maxSize; i++){
        p[i] = other.p[i];
    }
}

pointerDataClassDeep::~pointerDataClassDeep(){
    delete [] p;
}

void pointerDataClassDeep::insertAt(int index, int num) {
    if(index >= 0 && index < maxSize){
        p[index] = num;
    }
    length++;
}

void pointerDataClassDeep::displayData() {
    for(int i = 0; i < maxSize; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}