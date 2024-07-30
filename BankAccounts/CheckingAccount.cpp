#include "CheckingAccount.h"

void CheckingAccount::withdraw(double amt) {
	if (amt > balance)
		balance -= SERVICE_CHARGE;
	else
		BankAccount::withdraw(amt);
}
void CheckingAccount::monthlyProc() {
	monthlyService += MONTHLY_FEE;
	monthlyService += (numWithdrawals * WITHDRAWAL_FEE);
	BankAccount::monthlyProc();
}