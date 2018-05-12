/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Checking Account class
*/
#include "stdafx.h"
#include "CheckingAccount.h"

// this function will determine if a withdrawal, will cause the balance
// to go below $0
// if it does, service charge of $15 will be taken from account (withdrawal will not be made)
// if not enough to pay off balance, balance will become negative
void CheckingAccount::withdraw(double money) {
	if ((getBalance() - money) < 0) {
		serviceCharge(15.0);
	}
	else {
		BankAccount::withdraw(money);
	}
}

// before base class function is called, this function adds the monthly
// fee of $5 plus $0.10 per withdrawal to base class variable that holds monthly service charges
void CheckingAccount::monthlyProc() {
	serviceCharge(5.0);

	

}