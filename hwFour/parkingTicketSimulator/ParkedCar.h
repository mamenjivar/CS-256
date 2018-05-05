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
#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>
//#include <iostream>

using namespace std;

class ParkedCar {
private:
	string carMake;
	string carModel;
	string carLicenseNumber;
	string carNumberofMinutesParked;
public:
	// setters
	void setCarMake(string);
	void setCarModel(string);
	void setCarLicenseNumber(string);
	void setCarNumberOfMinutesParked(string);

	// getters
	string getCarMake() const;
	string getCarModel() const;
	string getLicenseNumber() const;
	string getCarNumberOfMinutesParked() const;

};

#endif