/*
 * Name: Miguel Menjivar
 * Course: CS 256
 * Date: 5/8/2018
 * 
 * Assignment: CW #2.2
 * PreferredCustomer class
 * 
 * Description:
 * Design a class named PreferredCustomer, which is derived from
 * the CustomerData class created from problem #7
 */

#include "stdafx.h" 
#include<iostream> 
#include <string>

using namespace std;

class PersonData{
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

class PreferredCustomer : public CustomerData {
private:
	double purchaseAmount;
	double discountLevel;
public:
	// setters
	void setPurchaseAmount(double);
	void setDiscountLevel(double);

	//getters
	double getPurchaseAmount() const;
	double getDiscountLevel() const;
};

void PreferredCustomer::setPurchaseAmount(double num) {
	purchaseAmount = num;
}

void PreferredCustomer::setDiscountLevel(double discount) {
	discountLevel = discount;
}

double PreferredCustomer::getPurchaseAmount() const
{
	return purchaseAmount;
}

double PreferredCustomer::getDiscountLevel() const
{
	return discountLevel ;
}

int main() {
	//CustomerData customer;
	PreferredCustomer customer;

	cout << customer.getAddress() << endl;
	cout << customer.getFirstName() << endl;

	int amount = 0;
	int total = 0;

	bool loop = true;
	while (loop) {
		cout << "Would you like to purchase something? " << endl;
		cout << "Enter a value less than 0 to exit" << endl;
		cout << "Enter the price of item: ";
		cin >> amount;
		cout << endl;


		if (amount > 0) {
			total += amount;

			if (500 >= total || total < 1000) {
				customer.setDiscountLevel(5.0);
			}
			else if (1000 >= total || total < 1500) {
				customer.setDiscountLevel(6.0);
			}
			else if (1500 >= total || total < 2000) {
				customer.setDiscountLevel(7.0);
			}
			else if (total >= 2000) {
				customer.setDiscountLevel(10.0);
			}

		}
		else {
			loop = false;
		}

		cout << "Total amount: " << total << endl;

	}

	cout << "total price of everything: " << total << endl;
	cout << "Total discount received: " << customer.getDiscountLevel() << endl;

	return 0;
}
