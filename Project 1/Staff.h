// Nathan Lai
// CECS 282 Project - Part 2
#ifndef STAFF_H
#define STAFF_H

#include <string>
#include "Employee.h"

using namespace std;

class Staff: public Employee {
	public:
		Staff();
		Staff(string lastName, string firstName, string idNumber, Sex s, string date, double hourlyRate);
		double getHourlyRate();
		void setHourlyRate(double hourlyRate);
		virtual double monthlyEarning();
		void putData();
	private:
		double hourlyRate;
};

#endif
