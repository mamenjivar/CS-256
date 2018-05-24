/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/22/2018
*
*
* Assignment: CW #4
* Production worker class
*
* Description:
* Production Worker class will be derived from
* the Employee class
*/
#include "stdafx.h"
#include "ProductionWorker.h"
#include <string>

using namespace std;

ProductionWorker::ProductionWorker() {
	shift = 0;
	hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(int number) {
	shift = number;
}

ProductionWorker::ProductionWorker(int number, double rate) {
	shift = number;
	hourlyPayRate = rate;
}

void ProductionWorker::setShift(int number) {
	shift = number;
}

void ProductionWorker::setHourlyPayRate(double hour) {
	hourlyPayRate = hour;
}

int ProductionWorker::getShift() const {
	return shift;
}

double ProductionWorker::getHourlyPayRate() const {
	return hourlyPayRate;
}