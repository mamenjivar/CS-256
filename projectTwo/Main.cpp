/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/9/2018
*
* Assignment: Project #2
* Bank Accounts
*
* Description:
* Main class
*/
#include "stdafx.h"
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include <iostream>

using namespace std;

int main() {
	int choice;
	int depositAmt;
	int withdrawalAmt;
	int chsa;

	SavingAccount sa;
	CheckingAccount ca;

	// for the sake of having a balance in the account
	sa.setBalance(100);

	cout << "Bank Account" << endl;
	cout << endl;

	bool loop = true;
	while (loop) {
		cout << "Choose from menu below" << endl;
		cout << "1) Make a deposit" << endl;
		cout << "2) Make a withdrawal" << endl;
		cout << "3) Check Account information" << endl;
		cout << "4) Exit" << endl;
		cout << ">> ";
		cin >> choice;
		cout << endl;

		if (choice == 1) { // deposit
			cout << "Deposit Amount: ";
			cin >> depositAmt;

			sa.deposit(depositAmt);
		}
		else if (choice == 2) { // withdraw

			cout << "Withdrawl Amount: ";
			cin >> withdrawalAmt;

			if (sa.checkStatus(withdrawalAmt)) {
				sa.withdraw(withdrawalAmt);
				cout << "This transaction is successful" << endl;
			}
			else {
				cout << "Transaction failed, you don't have enough funds" << endl;
			}
		}
		else if (choice == 3) {
			cout << "Balance: " << sa.getBalance() << endl;
			cout << "Total Number of Deposits: " << sa.getNumDeposits() << endl;
			cout << "Total Number of Withdrawals: " << sa.getNumWithdrawals() << endl;
			cout << "Monthly Charges: " << sa.getServiceCharge() << endl;
			cout << endl;
		}
		else if (choice == 4) {
			loop = false;
		}
		else {
			cout << "That is an invalid choice" << endl;
		}

	}

    return 0;
}

