// Nathan Lai
// CECS 282 Lab 8

#include "Digital.h"

#include <iostream>

Digital::Digital():Publication(), Sale(){
	storageCap = 0;
}

void Digital::getData(){
	Publication::getData();
	Sale::getData();
	cout << "Input storage size (MB): ";
	cin >> storageCap;
	cin.sync();
}

void Digital::putData(){
	Publication::putData();
	Sale::putData();
	cout << "Storage size (MB): " << storageCap << endl;
}
