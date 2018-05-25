/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/22/2018
*
*
* Assignment: CW #4
* Employee Class
*
* Description:
* Modify the Employee and Production worker classes
* so they throw exceptions whenn errors occur
*/
#include "stdafx.h"
#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee() {
	employeeName = "";
	employeeNumber = 0;
	hireDate = 0;
}

Employee::Employee(string name, int number, int date) {
	employeeName = name;
	employeeNumber = number;
	hireDate = date;
}

void Employee::setEmployeeName(string name) {
	employeeName = name;
}

void Employee::setEmployeeNumber(int number) {
	// throw exceptioin named InvalidEmployeeNumber
	// < than 0 or > than 9999
	if ((number < 0) || (number > 9999)) {
		throw invalidEmployeeNumber();
	}
	else {
		employeeNumber = number;
	}
}

void Employee::setHireDate(int date) {
	hireDate = date;
}

string Employee::getEmployeeName() const {
	return employeeName;
}

int Employee::getEmployeeNumber() const {
	return employeeNumber;
}

int Employee::getHireDate() const {
	return hireDate;
}