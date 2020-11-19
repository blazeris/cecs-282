//
// Created by Nathan
//

#ifndef LAB_9_TIME12_H
#define LAB_9_TIME12_H

class time12 {
    private:
        bool pm; //true = pm, false = am
        int hrs; //1 to 12
        int mins; //0 to 59
    public: //no-arg constructor
        time12();
        time12(bool ap, int h, int m); //3-arg constructor
        void display() const;
};


#endif //LAB_9_TIME12_H
