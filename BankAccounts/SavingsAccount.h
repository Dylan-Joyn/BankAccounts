#pragma once
#include "BankAccount.h"
class SavingsAccount :
    public BankAccount
{
protected:
    bool isActive;
public:
    SavingsAccount(double bal, double APR);
    SavingsAccount();

    virtual void withdraw(double amt);
    virtual void deposit(double amt);
    virtual void monthlyProc();
    virtual void setActivity();
    const int MAX_MONTHLY_WITHDRAWALS = 4;
    const double WITHDRAWL_FEE= 1;
    const double MINIMUM_BALANCE = 25;
};

