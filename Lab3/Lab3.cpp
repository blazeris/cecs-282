/*
	CECS 282 Lab 3: Bubble Sort
	Team 6: Nathan Lai and Danny Nguyen
*/
#include<iostream>
#include<fstream>

using namespace std;

int readData(int * &arr){
	int size;
	ifstream inputFile;
	inputFile.open("data.txt");
	inputFile >> size;
	for(int i = 0; i < size; i++){
		inputFile >> *(arr + i);
	}
	inputFile.close();
	return size;
}

void bsort(int *arr, int last){
	bool sorted = false;
	while(!sorted){
		sorted = true;
		for(int i = 0; i < last - 1; i++){
			if(*(arr + i) > *(arr + i + 1)){
				sorted = false;
				int temp = *(arr + i);
				*(arr + i) = *(arr + i + 1);
				*(arr + i + 1) = temp;
			}
		}
	}
}

void writeToConsole(int *arr, int last){
	cout << "Sorted array:";
	for(int i = 0; i < last; i++){
		cout << " " << *(arr + i);
	}
}

int main(){
	int * p = new int;
	cout << "Reading data.txt..." << endl;
	int last = readData(p);
	cout << "Performing bubble sort..." << endl;
	bsort(p, last);
	writeToConsole(p, last);
	
	return 0;
}
