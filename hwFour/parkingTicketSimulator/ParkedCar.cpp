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
#include "ParkedCar.h"

void ParkedCar::setCarMake(string make) {
	carMake = make;
}

void ParkedCar::setCarModel(string model) {
	carModel = model;
}

void ParkedCar::setCarLicenseNumber(string licenseNumber) {
	carLicenseNumber = licenseNumber;
}

void ParkedCar::setCarNumberOfMinutesParked(string numberOfMinutesParked) {
	carNumberofMinutesParked = numberOfMinutesParked;
}

string ParkedCar::getCarMake() const{
	return carMake;
}

string ParkedCar::getCarModel() const {
	return carModel;
}

string ParkedCar::getLicenseNumber() const {
	return carLicenseNumber;
}

string ParkedCar::getCarNumberOfMinutesParked() const {
	return carNumberofMinutesParked;
}
