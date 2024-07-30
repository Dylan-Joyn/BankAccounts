#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(double bal, double APR) 
	:BankAccount(bal,APR)
{
	setActivity();
}
SavingsAccount::SavingsAccount() 
	:BankAccount() 
{
	setActivity();
}

void SavingsAccount::withdraw(double amt) {
	if (isActive)
		BankAccount::withdraw(amt);
	setActivity();
}
void SavingsAccount::deposit(double amt) {
	BankAccount::deposit(amt);
	setActivity();
}
void SavingsAccount::monthlyProc() {
	if (numWithdrawals > MAX_MONTHLY_WITHDRAWALS)
		monthlyService += (numWithdrawals - MAX_MONTHLY_WITHDRAWALS) * WITHDRAWL_FEE;
	BankAccount::monthlyProc();
	setActivity();


}
void SavingsAccount::setActivity() {
	isActive = balance >= MINIMUM_BALANCE;
}
