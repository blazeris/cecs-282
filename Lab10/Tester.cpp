//
// Created by Nathan
//

#include <iostream>
#include "alpha.cpp"
#include "pointerDataClassShallow.h"
#include "gamma.h"
#include "pointerDataClassDeep.h"

using namespace std;
int main() {
    alpha a1(37);
    alpha a2;

    a2 = a1;
    cout << "\na2=";
    a2.display(); //display a2

    alpha a3(a1); //invoke copy constructor
    cout << "\na3=";
    a3.display(); //display a3
    alpha a4 = a1;
    cout << "\na4=";
    a4.display();

    cout << endl << endl;

    cout << "Testing shallow copy" << endl;
    pointerDataClassShallow list1s(10);
    list1s.insertAt(0, 50);
    list1s.insertAt(4, 30);
    list1s.insertAt(8, 60);
    cout << "List1: " << endl;
    list1s.displayData();

    cout << "List 2: " << endl;
    pointerDataClassShallow list2s(list1s);
    list2s.displayData();
    list1s.insertAt(4,100);
    cout << "List1: (after insert 100 at index 4)" << endl;
    list1s.displayData();
    cout << "List 2: "<<endl;
    list2s.displayData();

    cout << endl << endl;

    cout << "Testing deep copy" << endl;
    pointerDataClassDeep list1d(10);
    list1d.insertAt(0, 50);
    list1d.insertAt(4, 30);
    list1d.insertAt(8, 60);
    cout<< "List1: " << endl;
    list1d.displayData();

    cout<<"List 2: "<< endl;
    pointerDataClassDeep list2d(list1d);
    list2d.displayData();
    list1d.insertAt(4,100);
    cout<<"List1: (after insert 100 at index 4) " <<endl;
    list1d.displayData();
    cout<<"List 2: "<<endl;
    list2d.displayData();

    cout << endl << endl;

    gamma g1;
    gamma::showtotal();

    gamma g2, g3;
    gamma::showtotal();

    g1.showid();
    g2.showid();
    g3.showid();

    cout << "----------end of program----------\n";

    return 0;
}