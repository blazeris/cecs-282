#include "Account.h"
#include "Bank.h"
#include<iostream>

using namespace std;

int main(){
	//PROBLEM 1: Testing account class
   	Account my_account(100);     // Set up my account with $100
   	my_account.deposit(50);
   	my_account.withdraw(175);   // Penalty of $5 will apply
   	my_account.withdraw(25);

   	cout << "Account balance: " << my_account.get_balance() << "\n";
  
   	my_account.withdraw(my_account.get_balance());  // withdraw all
   	cout << "Account balance: " << my_account.get_balance() << "\n";
 
 
 	//PROBLEM 3: Testing bank class
 	Bank my_bank;
	cout << "Inital bank balances: \n";
	my_bank.print_balances(); /* set up empty accounts */

	cout << "Adding some money to accounts: \n";
	my_bank.deposit(1000, "S"); /* deposit $1000 to savings */
	my_bank.deposit(2000, "C"); /* deposit $2000 to checking */
	my_bank.print_balances();
	
	cout << "Taking out $1500 from checking,and moving $200 from";
	cout << " savings to checking.\n";
	my_bank.withdraw(1500, "C"); /* withdraw $1500 from checking */
	my_bank.transfer(200, "S"); /* transfer $200 from savings */
	my_bank.print_balances();
	
	cout << "Trying to transfer $900 from Checking.\n";
	my_bank.transfer(900,"C");
	my_bank.print_balances();
	
	cout << "trying to transfer $900 from Savings.\n";
	my_bank.transfer(900,"S");
	my_bank.print_balances();
 	
   return 0;  
}
