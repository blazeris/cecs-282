// Nathan Lai
// CECS 282 Project - Part 3
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
		virtual void getData();
	private:
		double hourlyRate;
};

#endif
