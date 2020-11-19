// Nathan Lai
// CECS 282 Project - Part 2
#include "Employee.h"

Employee::Employee(){
	lastName = "";
	firstName = "";
	idNumber = "";
	s = Unspecified;
}

Employee::Employee(string lastName, string firstName, string idNumber, Sex s, string date){
	this->lastName = lastName;
	this->firstName = firstName;
	this->idNumber = idNumber;
	this->s = s;
	this->date = date;
}

string Employee::getLastName(){
	return lastName;
}

string Employee::getFirstName(){
	return firstName;
}
string Employee::getIDNumber(){
	return idNumber;
}
Employee::Sex Employee::getSex(){
	return s;
}

string Employee::getDate(){
	return date;
}

void Employee::setLastName(string lastName){
	this->lastName = lastName;
}

void Employee::setFirstName(string firstName){
	this->firstName = firstName;
}

void Employee::setIDNumber(string idNumber){
	this->idNumber = idNumber;
}

void Employee::setSex(Sex s){
	this->s = s;
}

void Employee::setDate(string date){
	this->date = date;
}


void Employee::putData(){
	cout << "ID Employee Number: " << idNumber << endl;
	cout << "Employee Name: " << firstName << " " << lastName << endl;
	string sex = "Unspecified";
	switch(s){
		case M:
			sex = "M";
			break;
		case F:
			sex = "F";
			break;
	}
	cout << "Sex: " << sex << endl;
	cout << "Birth Date: " << date << endl;
}

double Employee::monthlyEarning(){
	return 0.0;
}
