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
	hireDate = "";
}

Employee::Employee(string name, int number, string date) {
	employeeName = name;
	employeeNumber = number;
	hireDate = date;
}

void Employee::setEmployeeName(string name) {
	employeeName = name;
}

void Employee::setEmployeeNumber(int number) {
	employeeNumber = number;
}

void Employee::setHireDate(string date) {
	hireDate = date;
}

string Employee::getEmployeeName() const {
	return employeeName;
}

int Employee::getEmployeeNumber() const {
	return employeeNumber;
}

string Employee::getHireDate() const {
	return hireDate;
}