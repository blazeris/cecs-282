// Nathan Lai
// CECS 282 Project - Part 3
#include "Faculty.h"

/*
Faculty::Faculty():Employee(){
	e = new Education();
	l = AS;
}

Faculty::Faculty(string lastName, string firstName, string idNumber, Sex s, string date, Education* e, Level l):
	Employee(lastName, firstName, idNumber, s, date){
	this->e = e;
	this->l = l;
}
*/

Education* Faculty::getEducation(){
	return e;
}

Faculty::Level Faculty::getLevel(){
	return l;
}

void Faculty::setEducation(Education* e){
	this->e = e;
}

void Faculty::setLevel(Level l){
	this->l = l;
}

double Faculty::monthlyEarning(){
	double levelSalary;
	switch(l){
		case AS:
			levelSalary = 1;
			break;
		case AO:
			levelSalary = 1.2;
			break;
		case FU:
			levelSalary = 1.4;
			break;
		default:
			levelSalary = 1;
			break;
	}
	return levelSalary * EmployeeInfo::FACULTY_MONTHLY_SALARY;
}

void Faculty::putData(){
	Employee::putData();
	string level = "";
	switch(l){
		case AO:
			level = "Associate";
			break;
		case FU:
			level = "Full";
			break;
		default:
			level = "Assistant";
	}
	cout << level << " Professor" << endl;
	cout << "Monthly Salary: $" << monthlyEarning() << endl;
}

void Faculty::getData(){
    Employee::getData();

    cin.ignore(10, '\n');

    Education::Degree d;
    char ch;
    cout << "'n' to add no degree"
            "\n'm' to add a MS"
            "\n'p' to add a PhD"
            "\n   Enter degree: ";
    cin >> ch;
    switch(ch) {                       //create specified employee type
        case 'n':
            d = Education::NoDegree;
            break;
        case 'm':
            d = Education::MS;
            break;
        case 'p':
            d = Education::PhD;
            break;
        default:
            cout << "\nUnknown degree type\n";
            return;
    }
    cin.ignore(10, '\n');

    string m;
    cout << "   Enter major: ";      cin >> m;
    cin.ignore(10, '\n');

    int r;
    cout << "   Enter number of researches: ";      cin >> r;
    setEducation(new Education(d, m, r));
    cin.ignore(10, '\n');

    char ch2;
    cout << "'s' to add assistant"
            "\n'o' to add associate"
            "\n'f' to add full-time"
            "\n   Enter level of faculty: ";
    cin >> ch2;
    switch(ch2) {                       //create specified employee type
        case 's':
            l = AS;
            break;
        case 'o':
            l = AO;
            break;
        case 'f':
            l = FU;
            break;
        default:
            cout << "\nUnknown level type\n";
            return;
    }
};