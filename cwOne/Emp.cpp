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
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//************************************************************
// Default Constructor that initializes all values null or 0 *
//************************************************************
Employee::Employee() {
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

//********************************************************************************
// Constructor #1 accepts arguments for name, idNumber, department, and position *
//********************************************************************************
Employee::Employee(string n, int i, string d, string p) {
	name = n;
	idNumber = i;
	department = d;
	position = p;
}

//*************************************************************************************************
// Constructor #2 accepts arguments for name, idNumber and also sets department, position to null *
//*************************************************************************************************
Employee::Employee(string n, int i) {
	name = n;
	idNumber = i;
	department = "";
	position = "";
}

//**********************************************
// setName assigns a value to the name member. *
//**********************************************
void Employee::setName(string nombre) {
	name = nombre;
}

//******************************************************
// setIdNumber assigns a value to the idNumber member. *
//******************************************************
void Employee::setIdNumber(int numero) {
	idNumber = numero;
}

//**********************************************************
// setDepartment assigns a value to the department member. *
//**********************************************************
void Employee::setDepartment(string departamento) {
	department = departamento;
}

//******************************************************
// setPosition assigns a value to the position member. *
//******************************************************
void Employee::setPosition(string posicion) {
	position = posicion;
}

//************************************************
// getName returns the value in the name member. *
//************************************************
string Employee::getName() const {
	return name;
}

//********************************************************
// getidNumber returns the value in the idNumber member. *
//********************************************************
int Employee::getIdNumber() const {
	return idNumber;
}

//************************************************************
// getDepartment returns the value in the department member. *
//************************************************************
string Employee::getDepartment() const {
	return department;
}

//********************************************************
// getPosition returns the value in the position member. *
//********************************************************
string Employee::getPosition() const {
	return position;
}