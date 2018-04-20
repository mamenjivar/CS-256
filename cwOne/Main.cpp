/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 4/17/18
*
* Assignment: CW #1
* Employee Class
*
* Description:
* Write an employee class
*/

#include "stdafx.h"
#include "Employee.h"
#include <iostream> // allows usto use cin and cout
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	// another way of creating an employee class
	/*
	Employee Susan("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee Mark("Mark Jones", 39119);
	Employee Joy();
	*/

	Employee empOne = Employee();
	Employee empTwo = Employee();
	Employee empThree = Employee();

	// employee one attributes
	empOne.setName("Susan Meyers");
	empOne.setIdNumber(47899);
	empOne.setDepartment("Accounting");
	empOne.setPosition("Vice President");

	// employee two attributes
	empTwo.setName("Mark Jones");
	empTwo.setIdNumber(39119);
	empTwo.setDepartment("IT");
	empTwo.setPosition("Programmer");

	// employee three attributes
	empThree.setName("Joy Rogers");
	empThree.setIdNumber(81774);
	empThree.setDepartment("Manufacturing");
	empThree.setPosition("Engineer");

	// header title
	cout << "Name";
	cout << setw(22) << "ID Number";
	cout << setw(15) << "Department";
	cout << setw(15) << "Position";
	cout << endl;

	// print employee One attributes
	cout << empOne.getName();
	cout << setw(10) << empOne.getIdNumber();
	cout << setw(19) << empOne.getDepartment();
	cout << setw(21) << empOne.getPosition();
	cout << endl;

	// print employee two attributes
	cout << empTwo.getName();
	cout << setw(12) << empTwo.getIdNumber();
	cout << setw(11) << empTwo.getDepartment();
	cout << setw(25) << empTwo.getPosition();
	cout << endl;

	// print employee three attributes
	cout << empThree.getName();
	cout << setw(12) << empThree.getIdNumber();
	cout << setw(22) << empThree.getDepartment();
	cout << setw(12) << empThree.getPosition();
	cout << endl;

	return 0;
}