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
#pragma once
#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>

using namespace std;

class ParkingMeter {
private:
	int numberParkingTimePurchased;

public:
	void setNumberParkingTimePurchased(int);

	int getNumberParkingTimePurchased() const;
};

#endif