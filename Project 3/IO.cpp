// Nathan Lai
// CECS 282 Project - Part 3
#include <iostream>
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"
#include "PartTime.h"

using namespace std;

int main(){
    char ch;

    //staff
    Employee::addEmployee(new Staff("Allen", "Paita", "123", Employee::M, "2/23/59", 50.00));
    Employee::addEmployee(new Staff("Zapata", "Steven", "456", Employee::F, "7/12/64", 35.00));
    Employee::addEmployee(new Staff("Rios", "Enrique", "789", Employee::M, "6/2/70", 40));

    //faculty
    Employee::addEmployee(new Faculty("Johnson", "Anne", "243", Employee::F, "4/27/62", new Education(Education::PhD, "Engineering", 3), Faculty::FU));
    Employee::addEmployee(new Faculty("Bouris", "William", "791", Employee::F, "3/14/75", new Education(Education::PhD, "English", 1), Faculty::AO));
    Employee::addEmployee(new Faculty("Andrade", "Christopher", "623", Employee::F, "5/22/90", new Education(Education::MS, "Physical Education", 0), Faculty::AS));

    //parttime
    Employee::addEmployee(new PartTime("Guzman", "Augusto", "455", Employee::F, "8/10/77", 35.00, 30));
    Employee::addEmployee(new PartTime("Depirro", "Martin", "678", Employee::F, "8/15/87", 30.00, 15));
    Employee::addEmployee(new PartTime("Aldaco", "Marque", "945", Employee::M, "11/24/88", 20.00, 35));

    while(true) {
        cout << "\n'a' -- add data for an employee"
                "\n'd' -- display data for all employees"
                "\n'w' -- write all employee data to file"
                "\n'r' -- read all employee data from file"
                "\n'x' -- exit"
                "\nEnter selection: ";
        cin >> ch;
        switch(ch) {
            case 'a':            //add an employee to list
                Employee::add(); break;
            case 'd':            //display all employees
                Employee::display(); break;
            case 'w':            //write employees to file
                Employee::write(); break;
            case 'r':            //read all employees from file
                Employee::read(); break;
            case 'x': exit(0);   //exit program
            default: cout << "\nUnknown command";
        }  //end switch
    }  //end while
    return 0;
}
