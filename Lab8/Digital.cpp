#include "Digital.h"

#include <iostream>

//Define the functions getData to input publication, storage and  three months of sales
//Define the function putData to display the publication, storage and three months of sales

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
	cout << "Storage size (MB): " << storageCap;
}
