//
// Created by Nathan
//
#include <string>
#include <iostream>
#include "person.h"

using namespace std;

person::person():
    firstname("n/a"), lastname("n/a"), phonenumber(0) { }

person::person(string firstname, string lastname, long phonenumber):
    firstname(firstname), lastname(lastname), phonenumber(phonenumber) { }

void person::display() const {
    cout << "Name: " << firstname << " " << lastname << endl;
    cout << "Phone Number: " << phonenumber << endl;
}

string person::getFirstName() const {
    return firstname;
}

string person::getLastName() const{
    return lastname;
}

bool operator<(const person& p1, const person& p2){
    if(p1.lastname == p2.lastname)
        return (p1.firstname < p2.firstname);
    return (p1.lastname < p2.lastname);
}

bool operator==(const person& p1, const person& p2){
    cout << (p1.lastname == p2.lastname);
    cout << (p1.firstname == p2.firstname);
    return ((p1.lastname == p2.lastname) && (p1.firstname == p2.firstname));
}