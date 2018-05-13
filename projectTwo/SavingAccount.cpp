/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Savings account class
*/
#include "stdafx.h"
#include "SavingAccount.h"

// if balance of savings account falls below 25, it becomes inactive
// no more withdrawals may be made until balance is raised above 25
// then account becomes active again
void SavingAccount::withdraw(double money) {
	if (getBalance() <= 25) {
		status = false;
	}
	else {
		status = true;
		BankAccount::withdraw(money);
		// call base class version of withdraw
	}

	//return status;
}

// checks to see account is inactive before a deposit is made
// if account is inactive, and deposit brings balance above $25,
// account becomes active, then calls base class version of function
void SavingAccount::deposit(double dep) {
	//if (status == true) {
		if ((getBalance() + dep) > 25) {
			status = true;
			BankAccount::deposit(dep);
		}
	//}
	else {
		status = false;
	}
	//return true;
}

// checks number of withdrawals, if number of withdrawals for month is 
// more than 4, service charge of $1 for each withdrawal above 4 is added
// to base class variable for monthly service charges
// also check if account active or inactive
void SavingAccount::monthlyProc() {
	if (getNumWithdrawals() > 4) {
		serviceCharge(1.0);
		withdraw(0.0);
		//BankAccount::withdraw();

	}
}

bool SavingAccount::checkStatus(double amt) {
	if ((getBalance() - amt) < 25) {
		status = false;
	}
	else {
		status = true;
	}
	return status;
}
   
bool SavingAccount::getStatus() const {
	return status;
}