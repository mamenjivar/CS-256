/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/8/2018
*
* Assignment: CW #2.1
* PersonData and CustomerData classes
*
* Description:
* Design a class named PersonData
* CustomerData class will be derived from PersonData
*/

#include "stdafx.h" 
#include<iostream> 
#include <string>

using namespace std;

class PersonData {
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	int zip;
	int phone;
public:
	PersonData();
	// setters
	void setLastName(string);
	void setFirstName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZip(int);
	void setPhone(int);

	//getters
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	int getZip() const;
	int getPhone() const;
};

PersonData::PersonData() {
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = 0;
	phone = 0;
}

void PersonData::setLastName(string ln) {
	lastName = ln;
}

void PersonData::setFirstName(string fn) {
	firstName = fn;
}

void PersonData::setAddress(string add) {
	address = add;
}

void PersonData::setCity(string c) {
	city = c;
}

void PersonData::setState(string stat) {
	state = stat;
}

void PersonData::setZip(int z) {
	zip = z;
}

void PersonData::setPhone(int ph) {
	phone = ph;
}

string PersonData::getLastName() const
{
	return lastName;
}

string PersonData::getFirstName() const
{
	return firstName;
}

string PersonData::getAddress() const
{
	return address;
}

string PersonData::getCity() const
{
	return city;
}

string PersonData::getState() const
{
	return state;
}

int PersonData::getZip() const
{
	return zip;
}

int PersonData::getPhone() const
{
	return phone;
}

class CustomerData : public PersonData {
private:
	int customerNumber;
	bool  mailingList;
public:
	// setters
	void setCustomerNumber(int);
	void setMailingList(bool);

	// getters
	int getCustomerNumber() const;
	bool getMailingList() const;

	void print();
};

void CustomerData::setCustomerNumber(int num) {
	customerNumber = num;
}

void CustomerData::setMailingList(bool mail) {
	mailingList = mail;
}

int CustomerData::getCustomerNumber() const {
	return customerNumber;
}

bool CustomerData::getMailingList() const {
	return mailingList;
}

void CustomerData::print() {
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Address: " << getAddress() << endl;
	cout << "City: " << getCity() << endl;
	cout << "State: " << getState() << endl;
	cout << "Zip: " << getZip() << endl;
	cout << "Phone: " << getPhone() << endl;
	cout << "Customer Number: " << customerNumber << endl;
	if (mailingList) {
		cout << "Mailing List: YES" << endl;
	}
	else
		cout << "Mailing List: NO" << endl;

	cout << endl;
}


int main() {
	CustomerData customer[6];
	
	customer[0].setFirstName("Jackson");
	customer[0].setLastName("Pollock");
	customer[0].setAddress("123 Fake street");
	customer[0].setCity("Compton");
	customer[0].setState("CA");
	customer[0].setZip(90010);
	customer[0].setPhone(2135058965);
	customer[0].setCustomerNumber(1);
	customer[0].setMailingList(true);

	customer[1].setFirstName("Jose");
	customer[1].setLastName("Rodriguez");
	customer[1].setAddress("Main street");
	customer[1].setCity("Los Angeles");
	customer[1].setState("CA");
	customer[1].setZip(91768);
	customer[1].setPhone(9095487635);
	customer[1].setCustomerNumber(2);
	customer[1].setMailingList(false);

	customer[2].setFirstName("Tyson");
	customer[2].setLastName("Torres");
	customer[2].setAddress("586 Towne St.");
	customer[2].setCity("Oakland");
	customer[2].setState("CA");
	customer[2].setZip(90001);
	customer[2].setPhone(3235985693);
	customer[2].setCustomerNumber(3);
	customer[2].setMailingList(true);

	customer[3].setFirstName("Michael");
	customer[3].setLastName("Jameson");
	customer[3].setAddress("Vermont Ave");
	customer[3].setCity("San Jose");
	customer[3].setState("CA");
	customer[3].setZip(91768);
	customer[3].setPhone(998693071);
	customer[3].setCustomerNumber(4);
	customer[3].setMailingList(false);

	customer[4].setFirstName("Mayra");
	customer[4].setLastName("Tin");
	customer[4].setAddress("University Drive");
	customer[4].setCity("Pomona");
	customer[4].setState("CA");
	customer[4].setZip(91768);
	customer[4].setPhone(9098693069);
	customer[4].setCustomerNumber(5);
	customer[4].setMailingList(true);

	customer[5].setFirstName("Maxwell");
	customer[5].setLastName("Luther");
	customer[5].setAddress("Amar Road");
	customer[5].setCity("Upland");
	customer[5].setState("CA");
	customer[5].setZip(91785);
	customer[5].setPhone(8187596325);
	customer[5].setCustomerNumber(6);
	customer[5].setMailingList(false);


	for (int i = 0; i < 6; i++) {
		customer[i].print();
	}

	return 0;
}