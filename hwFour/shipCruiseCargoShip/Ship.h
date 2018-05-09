/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* ship is the base class
*/

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Ship {
private:
	string name;
	string yearBuilt;
public:
	Ship(); // constructor
	Ship(string, string);

	// setters
	void setName(string);
	void setYearBuilt(string);

	// getters
	string getName() const;
	string getYearBuilt() const;

	virtual void print();
};
