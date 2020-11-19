// Nathan Lai
// CECS 282 Project - Part 3
#include "Employee.h"
#include "Faculty.h"
#include "PartTime.h"
#include "Staff.h"
#include <fstream>

int Employee::currentNum = 0;
vector<Employee*> Employee::employees;

/*
Employee::Employee(){
	lastName = "";
	firstName = "";
	idNumber = "";
	s = Unspecified;
}

Employee::Employee(string lastName, string firstName, string idNumber, Sex s, string date){
	this->lastName = lastName;
	this->firstName = firstName;
	this->idNumber = idNumber;
	this->s = s;
	this->date = date;
}


string Employee::getLastName(){
	return lastName;
}

string Employee::getFirstName(){
	return firstName;
}
string Employee::getIDNumber(){
	return idNumber;
}
*/

Employee::Sex Employee::getSex(){
	return s;
}

/*
string Employee::getDate(){
	return date;
}
*/

Employee::employee_type Employee::get_type(){
    if(typeid(*this) == typeid(Faculty)){
        return Employee::tfaculty;
    }
    else if(typeid(*this) == typeid(Staff)){
        return Employee::tstaff;
    }
    else if(typeid(*this) == typeid(PartTime)){
        return Employee::tparttime;
    }
    cerr << "\nBad employee type";
    exit(1);
};

/*
void Employee::setLastName(string lastName){
	this->lastName = lastName;
}

void Employee::setFirstName(string firstName){
	this->firstName = firstName;
}

void Employee::setIDNumber(string idNumber){
	this->idNumber = idNumber;
}
*/

void Employee::setSex(Sex s){
	this->s = s;
}

/*
void Employee::setDate(string date){
	this->date = date;
}
*/

void Employee::getData(){
    cin.ignore(10, '\n');
    cout << "   Enter last name: "; cin >> lastName;
    cout << "   Enter first name: "; cin >> firstName;
    cout << "   Enter ID number: ";      cin >> idNumber;
    char sex;
    cout << "'m' to enter male"
            "\n'f' to enter female"
            "\n   Enter sex: ";
    cin >> sex;
    switch(sex){
        case 'm':
            s = Employee::M;
            break;
        case 'f':
            s = Employee::F;
            break;
        default:
            cout << "\nUnknown sex type\n"; return;
    }
    cout << "   Enter birthdate: "; cin >> date;

};


void Employee::putData(){
	cout << "ID Employee Number: " << idNumber << endl;
	cout << "Employee Name: " << firstName << " " << lastName << endl;
	string sex = "Unspecified";
	switch(s){
		case M:
			sex = "M";
			break;
		case F:
			sex = "F";
			break;
	}
	cout << "Sex: " << sex << endl;
	cout << "Birth Date: " << date << endl;
}

double Employee::monthlyEarning(){
	return 0.0;
}

void Employee::add(){
    char ch;
    cout << "'f' to add a faculty"
            "\n's' to add a staff"
            "\n'p' to add a part-timer"
            "\nEnter selection: ";
    cin >> ch;
    switch(ch) {                       //create specified employee type
        case 'f': employees.push_back(new Faculty);   break;
        case 's': employees.push_back(new Staff); break;
        case 'p': employees.push_back(new PartTime);   break;
        default: cout << "\nUnknown employee type\n"; return;
    }
    employees[currentNum++]->getData();     //get employee data from user
}

void Employee::display(){
    for(int j = 0; j < currentNum; j++) {
        cout  << (j + 1);           //display number
        switch( employees[j]->get_type() ) {   //display type
            case tfaculty:    cout << ". Type: Faculty\n";   break;
            case tstaff:  cout << ". Type: Staff\n"; break;
            case tparttime:    cout << ". Type: Part-timer\n";   break;
            default: cout << ". Unknown type\n";
        }
        employees[j]->putData();    //display employee data
        cout << endl;
    }
}

void Employee::write(){
    int size;
    cout << "Writing " << currentNum << " employees.\n";
    ofstream ouf;              //open ofstream in binary
    employee_type etype;       //type of each employee object

    ouf.open("EMPLOY.DAT", ios::trunc | ios::binary);
    if(!ouf) {
        cout << "\nCan't open file\n";
        return;
    }

    for(int j = 0; j < currentNum; j++) {    //for every employee object
                           //get its type
        etype = employees[j]->get_type();
        //write type to file
        ouf.write( (char*)&etype, sizeof(etype) );
        switch(etype) {          //find its size

            case tfaculty:
                size = sizeof(Faculty);
                break;
            case tstaff:
                size = sizeof(Staff);
                break;
            case tparttime:
                size = sizeof(PartTime);
                break;
        }                    //write employee object to file
        ouf.write( (char*)(employees[j]), size);
        cout << "\nWrote to file successfully!";
        if(!ouf) {
            cout << "\nCan't write to file\n";
            return;
        }
    }
    ouf.close();
}

void Employee::read(){
    int size;                  //size of employee object
    employee_type etype;       //type of employee
    ifstream inf;              //open ifstream in binary
    inf.open("EMPLOY.DAT", ios::binary);
    if(!inf) {
        cout << "\nCan't open file\n"; return; }
    currentNum = 0;                     //no employees in memory yet
    while(true) {                       //read type of next employee
        inf.read( (char*)&etype, sizeof(etype) );
        if( inf.eof() )         //quit loop on eof
            break;
        if(!inf) {               //error reading type
            cout << "\nCan't read type from file\n"; return; }
        switch(etype){                    //make new employee
            case tfaculty:       //of correct type
                employees.push_back(new Faculty);
                size=sizeof(Faculty);
                break;
            case tstaff:
                employees.push_back(new Staff);
                size=sizeof(Staff);
                break;
            case tparttime:
                employees.push_back(new PartTime);
                size=sizeof(PartTime);
                break;
            default: cout << "\nUnknown type in file\n"; return;
        }                    //read data from file into it
        inf.read( (char*)employees[currentNum], size  );
        if(!inf) {               //error but not eof
            cout << "\nCan't read data from file\n"; return; }
        currentNum++;                    //count employee
    }  //end while
    cout << "Reading " << currentNum << " employees\n";
}