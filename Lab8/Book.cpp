#include "Publication.h"

#include "Sale.h"
#include "Book.h"

//Define the function getData to get the publication, sales, and page count

//Define the function putData to display the publication, sales, and page count

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
	cout << "Number of pages: " << pages;
}
