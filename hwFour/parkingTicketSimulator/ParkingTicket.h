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
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include <string>

using namespace std;

class ParkingTicket {
private:
	string ticketMake;
	string ticketModel;
	string ticketLicenseNumber;
	int ticketAmount;
	// $25 for the first hour
	// $10 for every additional hour
	string ticketName;
	int ticketBadgeNumber;
public:
	ParkingTicket(); // default constructor
	// setters
	void setTicketMake(string);
	void setTicketModel(string);
	void setTicketLicenseNumber(string);
	//void setTicketAmount(int);
	void ticket(int);
	void setTicketName(string);
	void setTicketBadgeNumber(int);

	// getters
	string getTicketMake() const;
	string getTicketModel() const;
	string getTicketLicenseNumber() const;
	int getTicketAmount() const;
	string getTicketName() const;
	int getTicketBadgeNumber() const;

	void printTicket();

};
#endif