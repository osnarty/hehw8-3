// this programs runs the bank account of jack and jill

#include "bankAccount.h"


int main()
{
    //  init the accounts jack and jill and a array of ralph alice and ed
    bankAccount jackAccount("Jack Smith", 50);
    bankAccount jillAccount("Jill Brian", 100);
	bankAccount bankArray[3] = {bankAccount("Ralph Kramden", 10), bankAccount("Alice Kramden", 20), bankAccount("Ed Norton", 30)};
	
	// 30$ for jack and jill
	jackAccount.deposit(30);
	jillAccount.deposit(30);
	
	// 30$ for the array people
	for(int i = 0; i < 3; i++)
	{
		bankArray[i].deposit(30);
	}
	
	// take away 20$ from each
	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	
	//  take away 20$ from each
	for(int i = 0; i < 3; i++)
	{
		bankArray[i].withdraw(20);
	}
	
	// names and balances for printing
	string name;
	float balance;
	cout << endl;
	
	//prints out jacks info
	name = jackAccount.getName();
	balance = jackAccount.getBalance();
	cout << "Account Name: " << name << "   Balance: $" << balance << endl;
    //prints out jills info
	name = jillAccount.getName();
	balance = jillAccount.getBalance();
	cout << "Account Name: " << name << "   Balance: $" << balance << endl;
    //prints out the 3 other arrays info
	for(int i = 0; i < 3; i++)
	{
		name = bankArray[i].getName();
		balance = bankArray[i].getBalance();
		cout << "Account Name: " << name << "   Balance: $" << balance << endl;
	}

	cout << endl;
}