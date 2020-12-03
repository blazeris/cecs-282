// Nathan Lai
// CECS 282 Project - Part 3
#include "PartTime.h"


PartTime::PartTime():Staff(){
	hoursPerWeek = 0;
}

PartTime::PartTime(string lastName, string firstName, string idNumber, Sex s, string date, double hourlyRate, int hoursPerWeek):
	Staff(lastName, firstName, idNumber, s, date, hourlyRate){
	this->hoursPerWeek = hoursPerWeek;
}


int PartTime::getHoursPerWeek(){
	return hoursPerWeek;
}

void PartTime::setHoursPerWeek(int hoursPerWeek){
	this->hoursPerWeek = hoursPerWeek;
}

double PartTime::monthlyEarning(){
	return 4 * hoursPerWeek * Staff::getHourlyRate();
}

void PartTime::putData(){
	Employee::putData();
	cout << "Hours worked per month: " << 4 * hoursPerWeek << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}

void PartTime::getData(){
    Staff::getData();
    cin.ignore(10, '\n');
    cout << "   Enter hours worked per week: ";      cin >> hoursPerWeek;
}
