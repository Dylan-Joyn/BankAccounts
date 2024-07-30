#include "BankAccount.h"
using namespace std;
BankAccount::BankAccount(double startBal, double interestR) : balance(startBal), APR(interestR), numWithdrawals(0), numDeposits(0), monthlyService(0), monthStartBal(startBal)
{}
BankAccount::BankAccount():balance(0), APR(0), numWithdrawals(0), numDeposits(0), monthlyService(0), monthStartBal(0)
{}
void BankAccount::deposit(double amt) {
	if (amt > 0) {
		balance += amt;
		numDeposits++;
	}
}
void BankAccount::withdraw(double amt) {
	if (amt > 0) {
		balance -= amt;
		numWithdrawals++;
	}
}
void BankAccount::calcInt() {
	double monthlyIntRate = APR / 12;
	double monthlyInterest = monthlyIntRate * balance;
	balance += monthlyInterest;
}
void BankAccount::monthlyProc() {
	balance -= monthlyService;
	calcInt();
	numDeposits = 0;
	numWithdrawals = 0;
	monthlyService = 0;
}

double BankAccount::getBalance() {
	return balance;
}
int BankAccount::getNumWithdrawals() {
	return numWithdrawals;
}
int BankAccount::getNumDeposits() {
	return numDeposits;
}
double BankAccount::getAPR() {
	return APR;
}
double BankAccount::getMonthlyService() {
	return monthlyService;
}

ostream operator& <<(ostream& strm, BankAccount& acct) {
	strm << "Starting Balance: " << acct.monthStartBal << endl
		<< "Number of Deposits: " << acct.getNumDeposits() << endl
		<< "Number of Withdrawals: " << acct.getNumWithdrawals() << endl
		<< "Service Charges: " << acct.getMonthlyService() << endl
		<< "Ending Balance: " << acct.getBalance() << endl;
	return strm;
}