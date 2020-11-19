// Nathan Lai
// CECS 282 Lab 8

#include "Sale.h"

void Sale::getData(){
	for(int i = 0; i < 3; i++){
		cout << "Input data for sales " << i + 1 << " month(s) ago: ";
		cin >> saleArray[i];
		cin.sync();
	}
}

void Sale::putData(){
	for(int i = 0; i < 3; i++){
		cout << "Sales " << i + 1 << " month(s) ago: " << saleArray[i] << endl;
	}
}

//Define the function putData to display three months of sales
