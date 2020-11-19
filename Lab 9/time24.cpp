//
// Created by Nathan
//

#include <iostream>
#include "time24.h"

using namespace std;

time24::time24() : hours(0), minutes(0), seconds(0) { }

time24::time24(int h, int m, int s) : //3-arg constructor
        hours(h), minutes(m), seconds(s) { }

void time24::display() const { //format: 23:15:01
    if(hours < 10)
        cout << '0';
    cout << hours << ':';
    if(minutes < 10)
        cout << '0';
    cout << minutes << ':';
    if(seconds < 10)
        cout << '0';
    cout << seconds;
}


time24::operator time12(){
    bool xPM = false;
    int xHours = hours;
    int xMinutes = minutes;
    if(hours >= 12) {
        xPM = true;
        if(hours > 12){
            hours -= 12;
        }
    }
    time12 x(xPM, xHours, xMinutes);
    return x;
}


