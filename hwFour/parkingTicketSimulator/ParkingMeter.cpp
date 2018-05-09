/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/4/2018
*
* Assignment: HW #4.2
* Parking Ticket Simulator
*
* Description:
* Represents the parking meter
*/
#include "stdafx.h"
#include "ParkingMeter.h"
#include <string>
#include <iostream>

using namespace std;

void ParkingMeter::setNumberParkingTimePurchased(int number) {
	numberParkingTimePurchased = number;
}

int ParkingMeter::getNumberParkingTimePurchased() const {
	return numberParkingTimePurchased;
}

void ParkingMeter::printMeter() {
	cout << "Meter: " << numberParkingTimePurchased << " minute(s)" << endl;
}