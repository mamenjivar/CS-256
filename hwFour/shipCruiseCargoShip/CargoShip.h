/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* Cargo ship class derived from ship class
*/
#pragma once
#include "Ship.h"

class CargoShip : public Ship {
private:
	int cargoCapacity;

public:
	CargoShip(); // constructor
	CargoShip(string, int);

	// setter
	void setCargoCapacity(int);

	// getter
	int getCargoCapacity() const;

	virtual void print();
};
