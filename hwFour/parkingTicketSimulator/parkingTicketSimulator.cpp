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
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
	//ParkingTicket ticket();
	 PoliceOfficer officer;

	ParkedCar car[5];
	ParkingMeter meter[5];

	cout << "Parking Ticket Simulator" << endl;
	cout << endl;

	// print car
	car[0].setCarMake("Toyota");
	car[0].setCarModel("Corolla");
	car[0].setCarLicenseNumber("123fg789");
	car[0].setCarNumberMinutesParked(60);
	car[0].printCar();

	meter[0].setNumberParkingTimePurchased(45);

	cout << endl;

	car[1].setCarMake("BMW");
	car[1].setCarModel("M3");
	car[1].setCarLicenseNumber("5GJG231");
	car[1].setCarNumberMinutesParked(60);
	car[1].printCar();

	meter[1].setNumberParkingTimePurchased(45);

	cout << endl;

	car[2].setCarMake("Mercedes");
	car[2].setCarModel("Benz");
	car[2].setCarLicenseNumber("9123456");
	car[2].setCarNumberMinutesParked(120);
	car[2].printCar();

	meter[2].setNumberParkingTimePurchased(45);

	cout <<	endl;

	car[3].setCarMake("Lexus");
	car[3].setCarModel("IS");
	car[3].setCarLicenseNumber("MGK5468");
	car[3].setCarNumberMinutesParked(90);
	car[3].printCar();

	meter[3].setNumberParkingTimePurchased(45);

	cout << endl;

	car[4].setCarMake("Bugatti");
	car[4].setCarModel("Veyron");
	car[4].setCarLicenseNumber("8796JKJ32");
	car[4].setCarNumberMinutesParked(150);
	car[4].printCar();
	
	meter[4].setNumberParkingTimePurchased(45);

	cout << endl;

	// officer patrolling
	officer.setOfficerName("Abraham Lincoln");
	officer.setOfficerBadgeNumber(123456789);

	officer.patrol(car[0].getCarNumberMinutesParked(), meter[0].getNumberParkingTimePurchased());

	officer.citation(car[0]);

    return 0;
}