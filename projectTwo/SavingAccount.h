/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Savings Account header
*/
#pragma once
#include "BankAccount.h"

class SavingAccount : public BankAccount {
private:
	bool active;
public:
	bool withdraw();
	bool deposit();
	void monthlyProc();
};