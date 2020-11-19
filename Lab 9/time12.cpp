//
// Created by Nathan
//

#include <iostream>
#include "time12.h"

using namespace std;

time12::time12() : pm(true), hrs(0), mins(0){ }

time12::time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m) { }

void time12::display() const { //format: 11:59 p.m.
    cout << hrs << ':';
    if(mins < 10)
        cout << '0'; //extra zero for "01"
    cout << mins << ' ';
    string am_pm = pm ? "p.m." : "a.m.";
    cout << am_pm;
}



