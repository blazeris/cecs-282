/*
	CECS 282 Lab 2, Problem 2 and 3: Account class that stores money
	Team 6: Nathan Lai and Danny Nguyen
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
	private:
		double balance;
	
	public:
		Account();
		
		Account(double balance);
		
		void deposit(double amount);
	
		void withdraw(double amount);
	
		double get_balance();
		
		void add_interest(double rate);
		
};

#endif
