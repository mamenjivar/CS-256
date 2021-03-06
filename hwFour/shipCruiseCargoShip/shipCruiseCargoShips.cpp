/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/7/2018
*
* Assignment: HW #4.3
* Ship, CruiseShip, and CargoShip Classes
*
* Description:
* cruiseShip and CargoShip will be derived from Ship Class
*/

#include "stdafx.h"
#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	const int NUM_TESTS = 3;

	Ship *test[NUM_TESTS] = {
		new Ship("Ship", "1972"),
		new CargoShip("cargo ship name", 1000),
		new CruiseShip("cruiseShip name", 50)
	};

	for (int i = 0; i < 3; i++) {
		test[i]->print();
		cout << endl;
	}
    return 0;
}