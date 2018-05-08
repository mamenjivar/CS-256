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
#include "ParkingTicket.h"
#include <iostream>

using namespace std;

ParkingTicket::ParkingTicket() {
	ticketMake = "";
	ticketModel = "";
	ticketLicenseNumber = "";
	ticketAmount = 0;
	ticketName = "";
	ticketBadgeNumber = 0;
}

void ParkingTicket::setTicketMake(string ticket) {
	ticketMake = ticket;
}

void ParkingTicket::setTicketModel(string model) {
	ticketModel = model;
}

void ParkingTicket::setTicketLicenseNumber(string number) {
	ticketLicenseNumber = number;
}

//void ParkingTicket::setTicketAmount(int amount) {
//	ticketAmount = amount;
//}

void ParkingTicket::ticket(int hour) {
	if (hour == 1) {
		ticketAmount = 25;
	}
	else {
		hour--;
		ticketAmount = 25 + (hour * 10);
	}
}

void ParkingTicket::setTicketName(string name) {
	ticketName = name;
}

void ParkingTicket::setTicketBadgeNumber(int badge) {
	ticketBadgeNumber = badge;
}

string ParkingTicket::getTicketMake() const {
	return ticketMake;
}

string ParkingTicket::getTicketModel() const {
	return ticketModel;
}

string ParkingTicket::getTicketLicenseNumber() const {
	return ticketLicenseNumber;
}

int ParkingTicket::getTicketAmount() const {
	return ticketAmount;
}

string ParkingTicket::getTicketName() const {
	return ticketName;
}

int ParkingTicket::getTicketBadgeNumber() const {
	return ticketBadgeNumber;
}

void ParkingTicket::printTicket() {
	cout << "CITATION" << endl;
	cout << "Officer Name: " << ticketName << endl;
	cout << "Officer Badge Number: " << ticketBadgeNumber << endl;
	cout << "Make: " << ticketMake << endl;
	cout << "Model: " << ticketModel << endl;
	cout << "Lisence Number: " << ticketLicenseNumber << endl;
	cout << "Citation Amount: " << ticketAmount << endl;

}