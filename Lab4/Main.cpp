#include "person.h"

// Lab 4
// Team 6: Nathan Lai, Danny Nguyen

// PROBLEM 1
// Function that swaps two positions in the persons array
void order(person** person1, person** person2){
	person temp = **person1;
	**person1 = **person2;
	**person2 = temp;
}

// PROBLEM 1
// bubble sort function that uses the order function
void bsort1(person ** persons, int n, bool s){
	bool done = false;
	while(!done){
		done = true;
		for(int i = 0; i < n - 1; i++){
			if((s && persons[i]->getName() > persons[i + 1]->getName()) ||
				(!s && persons[i]->getSalary() > persons[i + 1]->getSalary())){
					done = false;
					order(persons + i, persons + i + 1);
				}
		}
	}
}

// PROBLEM 2
// bubble sort function without the order function
void bsort2(person ** persons, int n, bool s){
	bool done = false;
	while(!done){
		done = true;
		for(int i = 0; i < n - 1; i++){
			if((s && persons[i]->getName() > persons[i + 1] ->getName()) ||
				(!s && persons[i]->getSalary() > persons[i + 1] ->getSalary())){
					done = false;
					person temp = *persons[i];
					*persons[i] = *persons[i + 1];
					*persons[i + 1] = temp;
				}
		}
	}
}

// prints out the persons array
void print(person** persons, int n){
	for(int i = 0; i < n; i++){
		cout << persons[i] -> getName() << " " << persons[i] -> getSalary() << endl;
	}
}

// main function for testing
int main(){
	int n;
	cout << "Number of persons in array: ";
	cin >> n;
	cout << endl;
	
	person* persons[n];
	for(int i = 0; i < n; i++){
		persons[i] = new person();
		persons[i]->setPerson();
	}
	cout << endl << "Unsorted array" << endl;
	print(persons, n);
	
	cout << endl << "Sorted array with order function" << endl;
	bsort1(persons, n, true);
	print(persons, n);
	
	cout << endl << "Sorted array without order function" << endl;
	bsort2(persons, n, true);
	print(persons, n);
	
	cout << endl << "Sorted array by salary" << endl;
	bsort2(persons, n, false);
	print(persons, n);
	return 0;
}
