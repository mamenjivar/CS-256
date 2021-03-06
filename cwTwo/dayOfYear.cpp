﻿/*
 * Name: Miguel Menjivar
 * Course: CS 256
 * Date 5/1/2018
 * 
 * Assignment: CW #2.1
 * Day of Year
 * 
 * Description:
 * write a class to find the specific day and month
 */

#include "stdafx.h" // visual studio
#include <iostream> 
#include <string>

using namespace std;

class DayOfYear {
private:
	int dayOfYear;
	int day;

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
	DayOfYear(); // default constructor
	DayOfYear(int); // constructor #1
	void print();
};

// declare static strings
string DayOfYear::jan = "January";
string DayOfYear::feb = "February";
string DayOfYear::mar = "March";
string DayOfYear::apr = "April";
string DayOfYear::may = "May";
string DayOfYear::jun = "June";
string DayOfYear::jul = "July";
string DayOfYear::aug = "August";
string DayOfYear::sep = "September";
string DayOfYear::oct = "October";
string DayOfYear::nov = "November";
string DayOfYear::dec = "December";

DayOfYear::DayOfYear() {
	dayOfYear = 0;
}

DayOfYear::DayOfYear(int num) {
	dayOfYear = num;
}

void DayOfYear::print() {
	if (dayOfYear <= 31) {
		cout << "Day " << dayOfYear << " would be " << jan << " " << dayOfYear << endl;
	}
	else if ((31 > dayOfYear) || (dayOfYear <= 59)) {
		day = dayOfYear - 31;
		cout << "Day " << dayOfYear << " would be " << feb << " " << day << endl;
	}
	else if ((59 > dayOfYear) || (dayOfYear <= 90)) {
		day = dayOfYear - 59;
		cout << "Day " << dayOfYear << " would be " << mar << " " << day << endl;
	}
	else if ((90 > dayOfYear) || (dayOfYear <= 120)) {
		day = dayOfYear - 90;
		cout << "Day " << dayOfYear << " would be " << apr << " " << day << endl;
	}
	else if ((120 > dayOfYear) || (dayOfYear <= 151)) {
		day = dayOfYear - 120;
		cout << "Day " << dayOfYear << " would be " << may << " " << day << endl;
	}
	else if ((151 > dayOfYear) || (dayOfYear <= 181)) {
		day = dayOfYear - 151;
		cout << "Day " << dayOfYear << " would be " << jun << " " << day << endl;
	}
	else if ((181 > dayOfYear) || (dayOfYear <= 212)) {
		day = dayOfYear - 181;
		cout << "Day " << dayOfYear << " would be " << jul << " " << day << endl;
	}
	else if ((212 > dayOfYear) || (dayOfYear <= 243)) {
		day = dayOfYear - 212;
		cout << "Day " << dayOfYear << " would be " << aug << " " << day << endl;
	}
	else if ((243 > dayOfYear) || (dayOfYear <= 273)) {
		day = dayOfYear - 243;
		cout << "Day " << dayOfYear << " would be " << sep << " " << day << endl;
	}
	else if ((273 > dayOfYear) || (dayOfYear <= 304)) {
		day = dayOfYear - 273;
		cout << "Day " << dayOfYear << " would be " << oct << " " << day << endl;
	}
	else if ((304 > dayOfYear) || (dayOfYear <= 334)) {
		day = dayOfYear - 304;
		cout << "Day " << dayOfYear << " would be " << nov << " " << day << endl;
	}
	else if ((334 > dayOfYear) || (dayOfYear <= 365)) {
		day = dayOfYear - 334;
		cout << "Day " << dayOfYear << " would be " << dec << " " << day << endl;
	}
}

int main() {
	int choice;

	bool loop = true;
	while (loop) {
		cout << "Enter a day (1-365) " << endl;
		cout << "Enter a number outside range (1-365) to exit" << endl;
		cout << "Choice: ";
		cin >> choice;

		if ((choice <= 0) || (choice > 365)) {
			break;
		}

		DayOfYear doy(choice);
		doy.print();
		cout << endl;
	}

	return 0;
}
