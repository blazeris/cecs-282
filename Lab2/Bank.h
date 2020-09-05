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
		
		void deposit(double amount, string account);
		
		void withdraw(double amount, string account);
		
		void transfer(double amount, string account);
		
		void print_balances();
		
};

#endif
