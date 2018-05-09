/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* cargo ship derives from ship class
*/
#include "stdafx.h"
#include "CargoShip.h"

CargoShip::CargoShip() {
	cargoCapacity = 0;
}

CargoShip::CargoShip(string nam, int num) {
	setName(nam);
	cargoCapacity = num;
}

void CargoShip::setCargoCapacity(int num) {
	cargoCapacity = num;
}

int CargoShip::getCargoCapacity() const {
	return cargoCapacity;
}

void CargoShip::print() {
	cout << "Ship Name: " << getName() << endl;
	cout << "Cargo Capacity: " << cargoCapacity << endl;
}