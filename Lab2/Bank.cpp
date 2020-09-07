/*
	CECS 282 Lab 2, Problem 3: Bank class that stores two accounts: checkings and savings
	Team 6: Nathan Lai and Danny Nguyen
*/

#include "Bank.h"
#include <iostream>

//no-parameter constructor
Bank::Bank()
	:checkings(), savings(){
}

//paramater constructor
Bank::Bank(double checkingsBal, double savingsBal)
	:checkings(checkingsBal), savings(savingsBal){
}

//adds money to a specified account
void Bank::deposit(double amount, string account){
	if(account == "S"){
		savings.deposit(amount);
	}
	else if(account == "C"){
		checkings.deposit(amount);
	}
	else{
		std::cout << "Invalid account type";
	};
}

//removes money from a specified account
void Bank::withdraw(double amount, string account){
	if(account == "S"){
		savings.withdraw(amount);
	}
	else if(account == "C"){
		checkings.withdraw(amount);
	}
	else{
		std::cout << "Invalid account type";
	}
}

//moves money from a specified account to another
void Bank::transfer(double amount, string account){
	if(account == "S"){
		//withdraw outside if statement, so overdraw fee is charged if overdrawn
		if(savings.get_balance() > amount){
			checkings.deposit(amount);
		}
		savings.withdraw(amount);
	}
	else if (account == "C"){
		//deposit outside if statement, so overdraw fee is charged if overdrawn
		if(checkings.get_balance() > amount){
			savings.deposit(amount);
		}
		checkings.withdraw(amount);

	}
	else {
		std::cout << "Invalid account type";
	}
}

//prints the balances of both accounts
void Bank::print_balances(){
	double checkingsBal = checkings.get_balance();
	double savingsBal = savings.get_balance();
	std::cout << "Checking: " << checkingsBal << endl << "Savings: " << savingsBal << endl;
}
