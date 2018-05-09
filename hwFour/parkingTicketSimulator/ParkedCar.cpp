/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/4/2018
*
* Assignment: HW #4.2
* Parking Ticket Simulator
*
* Description:
* Simulates a Parked Vehicle
*/
#include "stdafx.h"
#include "ParkedCar.h"
#include <iostream>
#include <string>

using namespace std;

ParkedCar::ParkedCar() {
	carMake = "";
	carModel = "";
	carLicenseNumber = "";
	carNumberMinutesParked = 0;
}

void ParkedCar::setCarMake(string make) {
	carMake = make;
}

void ParkedCar::setCarModel(string model) {
	carModel = model;
}

void ParkedCar::setCarLicenseNumber(string licenseNumber) {
	carLicenseNumber = licenseNumber;
}

void ParkedCar::setCarNumberMinutesParked(int numberOfMinutesParked) {
	carNumberMinutesParked = numberOfMinutesParked;
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

int ParkedCar::getCarNumberMinutesParked() const {
	return carNumberMinutesParked;
}

void ParkedCar::printCar() {
	cout << "Car Make: " << carMake << endl;
	cout << "Car Model: " << carModel << endl;
	cout << "Car License Number: " << carLicenseNumber << endl;
	cout << "Car Minutes Parked: " << carNumberMinutesParked << endl;
}
