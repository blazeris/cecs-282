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



		Employee();
		Employee(string ln, string fn, string id, Sex s, string d);
		
		virtual void putData();
		virtual void getData();
		virtual double monthlyEarning();


		char* getLastName();
		char* getFirstName();
		char* getIDNumber();
		Sex getSex();
        char* getDate();


		void setLastName(string ln);
		void setFirstName(string fn);
		void setIDNumber(string id);
		void setSex(Sex s);
		void setDate(string d);

        static void addEmployee(Employee* e);

		employee_type get_type();

		static void add();
        static void display();
        static void write();
        static void read();
		static void testEmployees();


		//virtual double monthlyEarning();
	private:
        static int currentNum; // current number of employees
        static vector<Employee*> employees;

		char lastName[EmployeeInfo::LEN];
        char firstName[EmployeeInfo::LEN];
        char idNumber[EmployeeInfo::LEN];
		Sex s;
        char date[EmployeeInfo::LEN];
		
};

#endif
