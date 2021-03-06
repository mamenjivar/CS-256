/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 4/24/18
*
* Assignment: Quiz #2
* Circle class
*
* Description:
* Write a circle class
*/
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Circle {
private:
	double radius;
	double pi = 3.14159;

public:
	Circle(); // default constructor
	Circle(double);
	void setRadius(double);
	
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;

};

// default constructor
Circle::Circle() {
	radius = 0;
}

// constructor
Circle::Circle(double r) {
	radius = r;
}

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() const{
	return radius;
}

double Circle::getArea() const {
	return pi * radius * radius;
}

double Circle::getDiameter() const {
	return radius * 2;
}

double Circle::getCircumference() const {
	return 2 * pi * radius;
}

int main() {
	double rad;
	Circle circle;

	cout << "Enter the circle's radius: ";
	cin >> rad;
	cout << endl;

	circle.setRadius(rad);

	cout << "Radius of Circle: " << rad << endl;
	cout << "Area of the Circle: " << circle.getArea() << endl;
	cout << "Diameter of the Circle: " << circle.getDiameter() << endl;
	cout << "Circumference of the Circle: " << circle.getCircumference() << endl;


	return 0;
}