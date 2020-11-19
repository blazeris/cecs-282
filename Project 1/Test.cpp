// Nathan Lai
// CECS 282 Project - Part 2

#include "Employee.h"
#include "Faculty.h"
#include "PartTime.h"
#include "Staff.h"
#include <vector>

using namespace std;

double employeeTotalEarnings(vector <Employee*> employees){
	double sum = 0;
	for(int i = 0; i < employees.size(); i++){
		sum += employees.at(i)->monthlyEarning();
	}
	return sum;
}

double partTimeTotalEarnings(vector <Employee*> employees){
	double sum = 0;
	for(int i = 0; i < employees.size(); i++){
		//if dynamic_cast works then proceed
		//dynamic_cast should only work when employees.at(i) is a part timer
		if(dynamic_cast<PartTime*>(employees.at(i))){
			sum += employees.at(i)->monthlyEarning();
		}
	}
	return sum;
}

int main(){
	vector <Employee*> employees;
	//staff
	//expected total earnings = 20000
	employees.push_back(new Staff("Allen", "Paita", "123", Employee::M, "2/23/59", 50.00)); 
	employees.push_back(new Staff("Zapata", "Steven", "456", Employee::F, "7/12/64", 35.00));
	employees.push_back(new Staff("Rios", "Enrique", "789", Employee::M, "6/2/70", 40));
	
	//faculty
	//expected total earnings = 18000
	employees.push_back(new Faculty("Johnson", "Anne", "243", Employee::F, "4/27/62", new Education(Education::PhD, "Engineering", 3), Faculty::FU));
	employees.push_back(new Faculty("Bouris", "William", "791", Employee::F, "3/14/75", new Education(Education::PhD, "English", 1), Faculty::AO));
	employees.push_back(new Faculty("Andrade", "Christopher", "623", Employee::F, "5/22/90", new Education(Education::MS, "Physical Education", 0), Faculty::AS));
	
	//parttime
	//expected total earnings = 8800
	employees.push_back(new PartTime("Guzman", "Augusto", "455", Employee::F, "8/10/77", 35.00, 30));
	employees.push_back(new PartTime("Depirro", "Martin", "678", Employee::F, "8/15/87", 30.00, 15));
	employees.push_back(new PartTime("Aldaco", "Marque", "945", Employee::M, "11/24/88", 20.00, 35));
	
	for(int i = 0; i < employees.size(); i++){
		cout << i + 1 << ".";
		employees.at(i)->putData();
		cout << endl;
	}
	
	cout << "Total earnings of all part-timers: $" << partTimeTotalEarnings(employees) << endl;
	cout << "Total earnings of all employees: $" << employeeTotalEarnings(employees) << endl;
	
	return 0;
}


