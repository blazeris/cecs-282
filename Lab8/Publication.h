// Nathan Lai
// CECS 282 Lab 8

#ifndef PUBLICATION_PUBLICATION_H
#define PUBLICATION_PUBLICATION_H

#include <iostream>

using namespace std;
class Publication {
public:
	Publication();
	void getData();
	void putData();

protected:
	string title;
	double price;

};

#endif //PUBLICATION_PUBLICATION_H
