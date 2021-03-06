/*
* Name: Miguel Menjivar
* Course: CS 256
* Date 5/1/2018
*
* Assignment: CW #2.2
* Day of Year Modification
*
* Description:
* write a class to find the specific day and month
*/

#include "stdafx.h" // visual studio
#include <iostream> 
#include <string>

using namespace std;

class DayOfYearMod {
private:
	int dayOfYear;
	int day;
	string month;

	static string jan;
	static string feb;
	static string mar;
	static string apr;
	static string may;
	static string jun;
	static string jul;
	static string aug;
	static string sep;
	static string oct;
	static string nov;
	static string dec;
public:
	DayOfYearMod(); // default constructor
	DayOfYearMod(int); // constructor #1
	DayOfYearMod(string, int); // constructor #2
	void print();
	int getDate();

	// overloaded
	void operator ++ ();
	void operator ++ (int);
	void operator -- ();
	void operator -- (int);

};

// declare static strings
string DayOfYearMod::jan = "January";
string DayOfYearMod::feb = "February";
string DayOfYearMod::mar = "March";
string DayOfYearMod::apr = "April";
string DayOfYearMod::may = "May";
string DayOfYearMod::jun = "June";
string DayOfYearMod::jul = "July";
string DayOfYearMod::aug = "August";
string DayOfYearMod::sep = "September";
string DayOfYearMod::oct = "October";
string DayOfYearMod::nov = "November";
string DayOfYearMod::dec = "December";

DayOfYearMod::DayOfYearMod() {
	dayOfYear = 0;
}

DayOfYearMod::DayOfYearMod(int num) {
	dayOfYear = num;
}

int DayOfYearMod::getDate() {
	return day;
}

void DayOfYearMod::operator++()
{
	++day;
}

void DayOfYearMod::operator++(int)
{
	day++;
}

void DayOfYearMod::operator--()
{
	--day;
}

void DayOfYearMod::operator--(int)
{
	day--; 
}

DayOfYearMod::DayOfYearMod(string months, int num) {
	month = months;
	day = num;

	if (month == jan) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == feb) {
		if (day > 28) {
			day = -1;
		}
	}
	else if (month == mar) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == apr) {
		if (day > 30) {
			day = -1;
		}
	}
	else if (month == may) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == jun) {
		if (day > 30) {
			day = -1;
		}
	}
	else if (month == jul) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == aug) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == sep) {
		if (day > 30) {
			day = -1;
		}
	}
	else if (month == oct) {
		if (day > 31) {
			day = -1;
		}
	}
	else if (month == nov) {
		if (day > 30) {
			day = -1;
		}
	}
	else if (month == dec) {
		if (day > 31) {
			day = -1;
		}
	}
}

void DayOfYearMod::print() {
	cout << month << " " << day << " is a valid date" << endl;
}

int main() {
	string month;
	int date;
	
	bool loop = true;
	while (loop) {
		cout << "Enter a month and a date" << endl;
		cout << "Month: ";
		cin >> month;
		cout << "Date: ";
		cin >> date;

		month[0] = toupper(month[0]);
		
		DayOfYearMod doym(month, date);
		if (doym.getDate() < 0) {
			cout << "It is an invalid date" << endl;
			loop = false;
		}
		else {
			doym.print();
			cout << endl;
		}
	}

	return 0;
}