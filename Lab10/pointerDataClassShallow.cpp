//
// Created by Nathan
//

#include "pointerDataClassShallow.h"

pointerDataClassShallow::pointerDataClassShallow(int size): maxSize(size) {
    p = new int[size];
}

pointerDataClassShallow::pointerDataClassShallow(pointerDataClassShallow & other):
        maxSize(other.maxSize), length(other.length), p(other.p){}

pointerDataClassShallow::~pointerDataClassShallow(){
    delete [] p;
}

void pointerDataClassShallow::insertAt(int index, int num) {
    if(index >= 0 && index < maxSize){
        p[index] = num;
    }
    length++;
}

void pointerDataClassShallow::displayData() {
    for(int i = 0; i < maxSize; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}