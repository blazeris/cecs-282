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
