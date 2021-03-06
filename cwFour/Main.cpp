/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/22/2018
* 
*
* Assignment: CW #4
* Main class
*
* Description:
* Modify the Employee and Production worker classes
* so they throw exceptions whenn errors occur
*/

#include "stdafx.h"
#include "ProductionWorker.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	const int emp = 2;
	bool loop = true;

	// will create 2 employees for showing purposes
	ProductionWorker pw[emp];

	// inputting all employees
	for (int i = 0; i < emp; i++) {
		string name;
		cout << "Please enter name of Employee: \n" << ">> ";
		cin >> name;
		pw[i].setEmployeeName(name);

		cout << endl;

		int number;
		cout << "Please enter the employee Number: \n" ">> ";
		cin >> number;

		while (loop) {
			try {
				pw[i].setEmployeeNumber(number);
				loop = false;
			}
			catch (Employee::invalidEmployeeNumber) {
				cout << "Please enter a valid Employee Number" << endl;
				cout << "(0-9999)" << endl;
				cout << ">> ";
				cin >> number;
			}
		}

		cout << endl;

		int date;
		cout << "Please enter the date Employee got Hired: \n" << ">> ";
		cin >> date;

		pw[i].setHireDate(date);

		cout << endl;

		int shift;
		cout << "Please enter the shift number for the Employee: \n" << ">> ";
		cin >> shift;

		loop = true;
		while (loop) {
			try {
				pw[i].setShift(shift);
				loop = false;
			}
			catch (ProductionWorker::InvalidWorker) {
				cout << "Please enter a valid shift number: " << endl;
				cout << "1 = day | 2 = night" << endl;
				cout << ">> ";
				cin >> shift;
			}
		}

		cout << endl;

		double payRate;
		cout << "Please enter hourly pay rate for employee: \n" << ">> ";
		cin >> payRate;

		loop = true;
		while (loop) {
			try {
				pw[i].setHourlyPayRate(payRate);
				loop = false;
			}
			catch (ProductionWorker::InvalidWorker) {
				cout << "Please enter a valid pay rate please" << endl;
				cout << "Must be above 0.0 to be a valid pay rate" << endl;
				cout << ">> ";
				cin >> payRate;
			}
		}
		cout << endl;
	}

	// printing out all employees
	for (int i = 0; i < emp; i++) {
		cout << "Employee " << i + 1 << ":" << endl;
		cout << "Name: " << pw[i].getEmployeeName() << endl;
		cout << "Number: " << pw[i].getEmployeeNumber() << endl;
		cout << "Hired Date: " << pw[i].getHireDate() << endl;
		cout << "Shift Number: " << pw[i].getShift() << endl;
		cout << "Pay Rate: " << pw[i].getHourlyPayRate() << endl;
		cout << endl;
	}

    return 0;
}

