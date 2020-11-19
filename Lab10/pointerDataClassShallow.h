//
// Created by Nathan
//

#ifndef LAB10_POINTERDATACLASSSHALLOW_H
#define LAB10_POINTERDATACLASSSHALLOW_H


#include<iostream>

using namespace std;

class pointerDataClassShallow {
    int maxSize;//variable to store the maximum size of p

    int length;//variable to store the number of elements in p

    int *p;// pointer to an int array

public:
    //Constructor to create an array of the size specified by the parameter size.
    pointerDataClassShallow(int size);

    //Copy constructor
    pointerDataClassShallow(pointerDataClassShallow & other);

    //Destructor to deallocate the memory space occupied by the array p
    ~pointerDataClassShallow();

    //the function insertAt inserts num into array p at the position specified by
    //index
    void insertAt(int index, int num);

    //The function displayData displays all the array elements in p
    void displayData();

};


#endif //LAB10_POINTERDATACLASSSHALLOW_H
