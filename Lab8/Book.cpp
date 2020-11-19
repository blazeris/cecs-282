// Nathan Lai
// CECS 282 Lab 8

#include "Publication.h"

#include "Sale.h"
#include "Book.h"

Book::Book():Publication(){
	pages = 0;
}

void Book::getData(){
	Publication::getData();
	Sale::getData();
	cout << "Input number of pages: ";
	cin >> pages;
	cin.sync();
}

void Book::putData(){
	Publication::putData();
	Sale::putData();
	cout << "Number of pages: " << pages << endl;
}
