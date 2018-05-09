/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* implements ship class features
*/

#include "stdafx.h"
#include "Ship.h"
#include <string>

Ship::Ship() {
	name = "";
	yearBuilt = "";
}

Ship::Ship(string n, string yb) {
	name = n;
	yearBuilt = yb;
}

void Ship::setName(string n) {
	name = n;
}

void Ship::setYearBuilt(string yb) {
	yearBuilt = yb;
}

string Ship::getName() const {
	return name;
}

string Ship::getYearBuilt() const {
	return yearBuilt;
}

void Ship::print() {
	cout << "Ship Name: " << name << endl;
	cout << "Year Built: " << yearBuilt << endl;
}