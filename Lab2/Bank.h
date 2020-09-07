/*
	CECS 282 Lab 2, Problem 3: Bank class that stores two accounts: checkings and savings
	Team 6: Nathan Lai and Danny Nguyen
*/

#ifndef BANK_H
#define BANK_H

#include "Account.h"
#include <string>

using namespace std;

class Bank {
	private:
		Account checkings;
		Account savings;
	public:
		Bank();
		
		Bank(double checkingsBal, double savingsBal);
		
		void deposit(double amount, string account);
		
		void withdraw(double amount, string account);
		
		void transfer(double amount, string account);
		
		void print_balances();
		
};

#endif
