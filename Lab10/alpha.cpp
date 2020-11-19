//
// Created by Nathan
//

#include <iostream>

using namespace std;

class alpha {
private:
    int data;
public:
    alpha(): data(0){}

    alpha(int data): data(data){}

    alpha(const alpha & a){
        data = a.data;
    }

    void display(){
        cout << data;
    }


};