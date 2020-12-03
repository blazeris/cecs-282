// Nathan Lai
// CECS 282 Project - Part 3
#ifndef PARTTIME_H
#define PARTTIME_H

#include "Staff.h"

class PartTime: public Staff {
	public:
		PartTime();
		PartTime(string lastName, string firstName, string idNumber, Sex s, string date, double hourlyRate, int hoursPerWeek);
		int getHoursPerWeek();
		void setHoursPerWeek(int hoursPerWeek);
		virtual double monthlyEarning();
		void putData();
		virtual void getData();
	private:
		int hoursPerWeek;
};

#endif
