// Nathan Lai
// CECS 282 Project - Part 3
#ifndef FACULTY_H
#define FACULTY_H

#include "Employee.h"
#include "Education.h"

class Faculty: public Employee{
	public:
		enum Level {
			AS, AO, FU
		};
		//Faculty();
		//Faculty(string lastName, string firstName, string idNumber, Sex s, string date, Education* e, Level l);
		Education* getEducation();
		Level getLevel();
		
		void setEducation(Education* e);
		void setLevel(Level l);
		virtual double monthlyEarning();
        virtual void getData();
		void putData();
	private:
		Education* e;
		Level l;

};

#endif
