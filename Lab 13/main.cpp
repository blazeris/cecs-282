#include <iostream>
#include <set>
#include <algorithm>
#include "person.h"

class comparePersons {
public:
    bool operator() (const person* ptr1, const person* ptr2) const {
        return (*ptr1 < *ptr2);
    }
};

class displayPerson {
public:
    void operator() (const person* ptr) const {
        ptr->display();
        cout << endl;
    }
};

int main() {
    multiset<person*, comparePersons> persons;
    multiset<person*, comparePersons>::iterator iter;


    person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
    persons.insert(ptrP1);

    person* ptrP2 = new person("Deauville", "William", 8435150);
    persons.insert(ptrP2);

    person* ptrP3 = new person("Wellington", "John", 9207404);
    persons.insert(ptrP3);

    person* ptrP4 = new person("Bartoski", "Peter", 6946473);
    persons.insert(ptrP4);

    person* ptrP5 = new person("Fredericks", "Roger", 7049982);
    persons.insert(ptrP5);

    person* ptrP6 = new person("McDonald", "Stacey", 7764987);
    persons.insert(ptrP6);

    person* ptrP7 = new person("KuangThu", "Bruce", 5551230);
    persons.insert(ptrP7);

    person* ptrP8 = new person("Deauville", "William", 8435150);
    persons.insert(ptrP8);

    for_each(persons.begin(), persons.end(), displayPerson());

    string searchlastname, searchfirstname;
    cout << "\n\nEnter last name to search: ";
    cin >> searchlastname;

    cout << "Enter first name to search: ";
    cin >> searchfirstname;

    person searchPerson(searchfirstname, searchlastname, 0);
    person* sPerson= &searchPerson;
    // get count of such persons
    int cntPersons = persons.count(sPerson);
    cout << "Found " << cntPersons << " of that name" << endl;


    if(iter != persons.end()){
        pair<multiset<person*, comparePersons>::iterator,
            multiset<person*, comparePersons>::iterator> range;
        range = persons.equal_range(sPerson);
        for_each(range.first, range.second, displayPerson());
    }

    //algo from notes
    /*
    iter = find(persons.begin(), persons.end(), searchPerson);
    while(iter != persons.end()){
        (*iter)->display();
        iter++;
        iter = find(iter, persons.end(), searchPerson);
    }
    */

    return 0;
}
