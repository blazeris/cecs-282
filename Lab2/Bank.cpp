#include "Bank.h"
#include <iostream>

Bank::Bank()
	:checkings(), savings(){
}

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

void Bank::transfer(double amount, string account){
	if(account == "S"){
		if(savings.get_balance() > amount){
			checkings.deposit(amount);
		}
		savings.withdraw(amount);
	}
	else if (account == "C"){
		if(checkings.get_balance() > amount){
			savings.deposit(amount);
		}
		checkings.withdraw(amount);

	}
	else {
		std::cout << "Invalid account type";
	}
}

void Bank::print_balances(){
	double checkingsBal = checkings.get_balance();
	double savingsBal = savings.get_balance();
	std::cout << "Checking: " << checkingsBal << endl << "Savings: " << savingsBal << endl;
}
