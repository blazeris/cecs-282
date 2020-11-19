//
// Created by Nathan
//

#include "gamma.h"
#include <iostream>

using namespace std;

int gamma::total = 0;

gamma::gamma(){
    total++;
    id = total;
}

gamma::~gamma(){
    cout << "Destroying ID number " << id << endl;
    total--;
}

void gamma::showtotal() {
    cout << "Total is " << total << endl;
}

void gamma::showid(){
    cout << "ID is " << id << endl;
};