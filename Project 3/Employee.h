#ifndef EMPLOYEE_H
// Nathan Lai
// CECS 282 Project - Part 3
#define EMPLOYEE_H

#include <iostream>
#include <string.h>
#include "EmployeeInfo.h"
#include <vector>

using namespace std;

class Employee: public EmployeeInfo {
	public:
        enum employee_type {tfaculty, tparttime, tstaff};
		enum Sex {
			Unspecified, M, F
		};

		static int currentNum; // current number of employees
		static vector<Employee*> employees;

		//Employee();
		//Employee(string lastName, string firstName, string idNumber, Sex s, string date);
		
		virtual void putData();
		virtual void getData();
		virtual double monthlyEarning();
		
		//string getLastName();
		//string getFirstName();
		//string getIDNumber();
		Sex getSex();
		//string getDate();
		
		//void setLastName(string lastName);
		//void setFirstName(string firstName);
		//void setIDNumber(string idNumber);
		void setSex(Sex s);
		//void setDate(string date);

		employee_type get_type();

		static void add();
        static void display();
        static void write();
        static void read();
		
		//virtual double monthlyEarning();
	private:
		char lastName[EmployeeInfo::LEN];
        char firstName[EmployeeInfo::LEN];
        char idNumber[EmployeeInfo::LEN];
		Sex s;
        char date[EmployeeInfo::LEN];
		
};

#endif
