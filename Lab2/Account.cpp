/*
	CECS 282 Lab 2, Problem 2 and 3: Account class that stores money
	Team 6: Nathan Lai and Danny Nguyen
*/

#include "Account.h"

//no-parameter constructor
Account::Account(){
	balance = 0;
}
	
//parameter constructor
Account::Account(double balance){
	this->balance = balance;
}
	
//adds money to the account
void Account::deposit(double amount){
	balance += amount;
}
	
//removes money from an account
void Account::withdraw(double amount){
	if(amount > balance){
		balance -= 5;
	}
	else{
		balance -= amount;
	}
}

//returns the balance of the account	
double Account::get_balance(){
	return balance;
}

//adds interest to the current balance
void Account::add_interest(double rate){
	balance *= (1 + rate/100);
}

