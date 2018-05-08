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
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"

using namespace std;

class PoliceOfficer {
private:
	string officerName;
	int officerBadgeNumber;
	// examine parked car object and parking meter object
	// and determine whether time has expired
	// issue a parking ticket

public:
	// will compare both parked car and pakring meter if time expired or not
	void patrol(int, int);

	void citation(ParkedCar);

	void setOfficerName(string);
	void setOfficerBadgeNumber(int);

	string getOfficerName() const;
	int getOfficerBadgeNumber() const;



};

#endif