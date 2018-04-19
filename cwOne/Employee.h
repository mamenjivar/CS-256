#pragma once
/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 4/17/18
*
* Assignment: CW #1
* Employee Class declaration
*
* Description:
* Write an employee class
*/
#ifndef EMPLOYEE_H
#define RECTANGLE_H
#include <string>

using namespace std;

// Employee class declaration
class Employee {
public:
	void setName(string);
	void setIdNumber(int);
	void setDepartment(string);
	void setPosition(string);
	string getName() const;
	int getIdNumber() const;
	string getDepartment() const;
	string getPosition() const;

	// default constructor
	Employee(); 
	// constructor #1
	Employee(string, int, string, string); 
	// constructor #2
	Employee(string, int);

private:
	string name;
	int idNumber;
	string department;
	string position;
};
#endif /** RECTANGLE_H **/