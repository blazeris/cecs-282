//
// Created by Nathan
//

#ifndef LAB_9_TIME24_H
#define LAB_9_TIME24_H

#include "time12.h"

class time24 {
    private:
        int hours; //0 to 23
        int minutes; //0 to 59
        int seconds; //0 to 59
    public: //no-arg constructor
        time24();
        time24(int h, int m, int s); //3-arg constructor
        void display() const;

        operator time12();
};


#endif //LAB_9_TIME24_H
