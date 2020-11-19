#ifndef EMPLOYEE_H
// Nathan Lai
// CECS 282 Project - Part 2
#define EMPLOYEE_H

#include <iostream>
#include <string.h>
#include "EmployeeInfo.h"

using namespace std;

class Employee: public EmployeeInfo {
	public:
		enum Sex {
			Unspecified, M, F
		};
		Employee();
		Employee(string lastName, string firstName, string idNumber, Sex s, string date);
		
		virtual void putData();
		virtual double monthlyEarning();
		
		string getLastName();
		string getFirstName();
		string getIDNumber();
		Sex getSex();
		string getDate();
		
		void setLastName(string lastName);
		void setFirstName(string firstName);
		void setIDNumber(string idNumber);
		void setSex(Sex s);
		void setDate(string date);
		
		//virtual double monthlyEarning();
	private:
		string lastName;
		string firstName;
		string idNumber;
		Sex s;
		string date;
		
};

#endif
