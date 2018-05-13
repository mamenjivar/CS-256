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
	bool status;
public:
	void withdraw(double);
	void deposit(double);
	void monthlyProc();

	bool checkStatus(double);
	bool getStatus() const;
}; 