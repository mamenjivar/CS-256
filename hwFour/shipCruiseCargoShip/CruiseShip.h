/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* cruise ship class is derived from ship class
*/
#pragma once
#include "Ship.h"

class CruiseShip : public Ship {
private:
	int numPassengers;

public:
	CruiseShip(); // constructor
	CruiseShip(string, int);
	
	// setter
	void setNumPassengers(int);

	// getter
	int getNumPassengers() const;

	virtual void print();
};