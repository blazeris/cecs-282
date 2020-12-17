//
// Created by Nathan
//

#ifndef LAB_13_PERSON_H
#define LAB_13_PERSON_H

#include <string>
#include <iostream>

using namespace std;

class person {
public:
    person();
    person(string firstname, string lastname, long phonenumber);
    void display() const;
    string getLastName() const;
    string getFirstName() const;
    friend bool operator<(const person& p1, const person& p2);
    friend bool operator==(const person& p1, const person& p2);
private:
    string lastname;
    string firstname;
    long phonenumber;
};

#endif //LAB_13_PERSON_H
