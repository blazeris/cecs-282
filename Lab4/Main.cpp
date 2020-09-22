#include "person.h"

void order(person** person1, person** person2){
	person temp = **person1;
	**person1 = **person2;
	**person2 = temp;
}

void bsort(person ** persons, int n, bool s){
	bool done = false;
	while(!done){
		done = true;
		for(int i = 0; i < n - 1; i++){
			if((s && (*(persons + i))->getName() < (*(persons + i + 1))->getName()) ||
				(!s && (*(persons + i))->getSalary() < (*(persons + i + 1))->getSalary())){
					done = false;
					order(persons + i, persons + i + 1);
				}
		}
	}
}

void print(person** persons, int n){
	for(int i = 0; i < n; i++){
		cout << (*(persons + i)) -> getName() << " " << (*(persons + i)) -> getSalary() << endl;
	}
}

int arrayInput(person** persons){
	int n = 0;
	bool done = false;
	
	while(!done){
		string name;
		float salary;
		cout << "Input name (type done to stop): ";
		cin >> name;
		if(name == "done"){
			done = true;
		}
		else{
			cout << "Input salary: ";
			cin >> salary;
			person * newPerson = new person(name, salary);
			*(persons + n) = newPerson;
			n++;
		}
	}
	return n;
}


int main(){
	person **persons = new person*;
	int n = arrayInput(persons);
	bsort(persons, n, false);
	print(persons, n);
	return 0;
}
