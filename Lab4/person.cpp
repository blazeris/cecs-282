// Lab 4
// Team 6: Nathan Lai, Danny Nguyen

#include "person.h"

person::person(){
	name = "n/a";
	salary = 0;
}
		
person::person(string name, float salary){
	this->name = name;
	this->salary = salary;
}
		
void person::setPerson(){
	cout << "Input name: ";
	cin >> name;
	cout << "Input salary: ";
	cin >> salary;
}
		
string person::getName(){
	return name;
}
		
float person::getSalary(){
	return salary;
}

