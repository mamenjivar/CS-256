/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Checking Account header
*/
#pragma once
#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:

public:
	void withdraw(double);
	void monthlyProc();
};

