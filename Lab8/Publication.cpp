// Nathan Lai
// CECS 282 Lab 8

#include "Publication.h"

#include <iostream>

using namespace std;

Publication::Publication(){
	title = "";
	price = 0.0;
}

void Publication::putData(){
	cout << "Title: " << title << endl; 
	cout << "Price: $" << price << endl;
}

void Publication::getData(){
	cout << "Input Title: ";
	cin.clear();
	getline(cin, title);
	cout << "Input Price: ";
	cin >> price;
	cin.sync();
}
