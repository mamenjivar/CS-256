/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/22/2018
*
*
* Assignment: CW #4
* Employee header
*
* Description:
* Modify the Employee and Production worker classes
* so they throw exceptions whenn errors occur
*/
#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
private:
	string employeeName;
	int employeeNumber;
	string hireDate;

public:
	// constructor
	Employee();
	Employee(string, int, string);

	// setters
	void setEmployeeName(string);
	void setEmployeeNumber(int);
	void setHireDate(string);

	// getters
	string getEmployeeName() const;
	int getEmployeeNumber() const;
	string getHireDate() const;
};
#endif /* EMPLOYEE_H */