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

#include "stdafx.h"
#include "CruiseShip.h"

CruiseShip::CruiseShip() {
	numPassengers = 0;
}

CruiseShip::CruiseShip(string nombre, int passenger) {
	setName(nombre);
	numPassengers = passenger;
}

void CruiseShip::setNumPassengers(int num) {
	numPassengers = num;
}

int CruiseShip::getNumPassengers() const {
	return numPassengers;
}

void CruiseShip::print() {
	cout << "Ship Name: " << getName() << endl;
	cout << "Max Number of Passengers: " << numPassengers << endl;
}
