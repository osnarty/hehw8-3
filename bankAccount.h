#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
using namespace std;

class bankAccount {
	private:
		string customerName;
		float balance;
		void setName(string n);
		void setBalance(float bala);
	public:
		bankAccount(string n, float bala);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		//~bankAccount();
};
#endif
