/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Bank Account class header
*/
#pragma once

class BankAccount {
private:
	double balance; //holds account balance
	int numDeposits; // holds the total number of deposits of account
	int numWithdrawals; // holds total number of withdrawals of account
	double annualInterestRate; // holds annual interest rate
	double monthlyServiceCharge; // holds monthly service charges
public:
	// constructors
	BankAccount();
	BankAccount(double, double); // account balance, interest rate

	virtual void deposit(double);
	virtual void withdraw(double);
	virtual void calcInt();
	virtual void monthlyProc();

	void setBalance(double);
	double getBalance() const;
	int getNumWithdrawals() const;
	int getNumDeposits() const;
	void serviceCharge(double);
	double getServiceCharge() const;
};