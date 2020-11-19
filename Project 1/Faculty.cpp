// Nathan Lai
// CECS 282 Project - Part 2
#include "Faculty.h"
#include "Employee.h"

Faculty::Faculty():Employee(){
	e = new Education();
	l = AS;
}

Faculty::Faculty(string lastName, string firstName, string idNumber, Sex s, string date, Education* e, Level l):
	Employee(lastName, firstName, idNumber, s, date){
	this->e = e;
	this->l = l;
}

Education* Faculty::getEducation(){
	return e;
}

Faculty::Level Faculty::getLevel(){
	return l;
}

void Faculty::setEducation(Education* e){
	this->e = e;
}

void Faculty::setLevel(Level l){
	this->l = l;
}

double Faculty::monthlyEarning(){
	double levelSalary;
	switch(l){
		case AS:
			levelSalary = 1;
			break;
		case AO:
			levelSalary = 1.2;
			break;
		case FU:
			levelSalary = 1.4;
			break;
		default:
			levelSalary = 1;
			break;
	}
	return levelSalary * EmployeeInfo::FACULTY_MONTHLY_SALARY;
}

void Faculty::putData(){
	Employee::putData();
	string level = "";
	switch(l){
		case AO:
			level = "Associate";
			break;
		case FU:
			level = "Full";
			break;
		default:
			level = "Assistant";
	}
	cout << level << " Professor" << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}
