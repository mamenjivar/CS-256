/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/22/2018
*
*
* Assignment: CW #4
* Production Worker header
*
* Description:
* Production Worker class will be derived from 
* the Employee class
*/
#pragma once
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <string>

using namespace std;

class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;
public:
	// 2 shifts, day and night
	// day = 1; night = 2
	// constructors
	ProductionWorker();
	ProductionWorker(int);
	ProductionWorker(int, double);

	// setters
	void setShift(int);
	void setHourlyPayRate(double);

	// getters
	int getShift() const;
	double getHourlyPayRate() const;
};

#endif /* PRODUCTIONWORKER_H */