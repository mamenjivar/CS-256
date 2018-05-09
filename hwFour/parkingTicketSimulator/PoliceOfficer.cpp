/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/4/2018
*
* Assignment: HW #4.2
* Parking Ticket Simulator
*
* Description:
* Simulates Police Officer
*/
#include "stdafx.h"
#include "PoliceOfficer.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>
#include <iostream>

using namespace std;

// fix this
bool PoliceOfficer::patrol(int car, int meter) {
	if (car < meter) {
		return false; // not cited
	}
	else {
		return true; // cited
	}
}

void PoliceOfficer::setOfficerName(string name) {
	officerName = name;
}

void PoliceOfficer::setOfficerBadgeNumber(int number) {
	officerBadgeNumber = number;
}

string PoliceOfficer::getOfficerName() const {
	return officerName;
}

int PoliceOfficer::getOfficerBadgeNumber() const {
	return officerBadgeNumber;
}

// issue a parking ticket
void PoliceOfficer::citation(ParkedCar car, ParkingMeter meter) {
	ParkingTicket citation;

	citation.ticket(car.getCarNumberMinutesParked(), meter.getNumberParkingTimePurchased());

	citation.setTicketName(officerName);
	citation.setTicketBadgeNumber(officerBadgeNumber);
	citation.setTicketMake(car.getCarMake());
	citation.setTicketModel(car.getCarModel());
	citation.setTicketLicenseNumber(car.getLicenseNumber());
	
	citation.printTicket();
}
