// Nathan Lai
// CECS 282 Project - Part 2
#include "Staff.h"

Staff::Staff():Employee(){
	hourlyRate = 0.0;
}

Staff::Staff(string lastName, string firstName, string idNumber, Sex s, string date, double hourlyRate):Employee(lastName, firstName, idNumber, s, date){
	this->hourlyRate = hourlyRate;
}

double Staff::getHourlyRate(){
	return hourlyRate;
}

void Staff::setHourlyRate(double hourlyRate){
	this->hourlyRate = hourlyRate;
}

double Staff::monthlyEarning(){
	return EmployeeInfo::STAFF_MONTHLY_HOURS_WORKED * hourlyRate;
}

void Staff::putData(){
	Employee::putData();
	cout << "Full Time" << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}
