#include<iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class person {
	private:
		string name;
		float salary;
	public:
		person();
		
		person(string name, float salary);
		
		void setPerson();
		
		string getName();
		
		float getSalary();
};

#endif
