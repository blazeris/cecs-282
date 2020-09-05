#include "Account.h"

Account::Account(){
	balance = 0;
}
	
Account::Account(double balance){
	this->balance = balance;
}
	
void Account::deposit(double amount){
	balance += amount;
}
	
void Account::withdraw(double amount){
	if(amount > balance){
		balance -= 5;
	}
	else{
		balance -= amount;
	}
}
	
double Account::get_balance(){
	return balance;
}

void Account::add_interest(double rate){
	balance *= (1 + rate/100);
}

