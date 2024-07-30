#pragma once
#include <ostream>
using namespace std;
class BankAccount
{
protected:
	double balance;
	int numWithdrawals;
	int numDeposits;
	double APR;
	double monthlyService;
	double monthStartBal; //records the balance at the beginning of the month
public:
	BankAccount(double startBal, double interestR);
	BankAccount();
	virtual void deposit(double amt);
	virtual void withdraw(double amt);
	virtual void calcInt();
	virtual void monthlyProc();

	double getBalance();
	int getNumWithdrawals();
	int getNumDeposits();
	double getAPR();
	double getMonthlyService();

	friend ostream& operator <<(ostream& strm, BankAccount& acct);

};

