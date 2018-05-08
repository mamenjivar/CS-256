/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/4/2018
*
* Assignment: HW #4.2
* Parking Ticket Simulator
*
* Description:
* Simulation of an officer issuing a parking ticket
*/
#include "stdafx.h"
#include "ParkingMeter.h"

void ParkingMeter::setNumberParkingTimePurchased(int number) {
	numberParkingTimePurchased = number;
}

int ParkingMeter::getNumberParkingTimePurchased() const {
	return numberParkingTimePurchased;
}