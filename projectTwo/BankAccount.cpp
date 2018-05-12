/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Bank Account class
*/

#include "stdafx.h"
#include "BankAccount.h"

// default constructor
BankAccount::BankAccount() {
	balance = 0.0;
	numDeposits = 0;
	numWithdrawals = 0;
	annualInterestRate = 0.0;
	monthlyServiceCharge = 0.0;
}

// constructor #2
BankAccount::BankAccount(double num1, double num2) {
	balance = num1;
	annualInterestRate = num2;
}

// Accepts an argument for the amount of the deposit
// will add the argument to the account balance
// also increment the variale holding the number of deposits
void BankAccount::deposit(double num1) {
	balance += num1;
	numDeposits++;
}

// Accepts an argument for the amount of the withdrawal
// Will subtract the argument from the balance
// also incrememnt the number of withdrawals
void BankAccount::withdraw(double num1) {
	balance -= num1;
	numWithdrawals++;
}

// updates the balance by calculating the monthly interest earned by account
// also adding the interest to the balance
void BankAccount::calcInt() {
	double mir; // monthly interest rate
	mir = annualInterestRate / 12;

}

void BankAccount::monthlyProc() {

}