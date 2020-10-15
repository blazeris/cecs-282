#include <iostream>

using namespace std;

int main(){
	int a = 10;
	int *ptr = &a;
	int **dptr = & ptr;
	
	cout << **dptr;
	
	
	return 0;
}
