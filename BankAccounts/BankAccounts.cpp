// BankAccounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"BankAccount.h"
#include"SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <cmath>
using namespace std;
void testBankAccount();
void testSavingsAccount();
void testCheckingAccount();

int main()
{
	testCheckingAccount();


}

void testBankAccount() {
	BankAccount myAccount(100, .03);
	myAccount.deposit(400);
	myAccount.withdraw(120);
	myAccount.monthlyProc();


	cout << myAccount;
}

void testSavingsAccount() {
	SavingsAccount myAccount(100, .03);
	myAccount.withdraw(76);
	cout << myAccount << endl;

	myAccount.withdraw(76);
	cout << myAccount << endl;

	myAccount.deposit(3);
	myAccount.withdraw(76);
	cout << myAccount << endl;

}
void testCheckingAccount() {
	CheckingAccount myAccount(100, .03);
	myAccount.deposit(500);
	cout << myAccount << endl;

	myAccount.withdraw(700);
	cout << myAccount << endl;

	for (int i = 0; i < 100; i++)
		myAccount.withdraw(1000);

	cout << myAccount << endl;
	
	myAccount.monthlyProc();
	cout << myAccount << endl;
}