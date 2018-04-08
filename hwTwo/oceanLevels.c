/*
 * oceanLevels.c
 * Course: CS 256
 * Assignment: HW #2.1
 * Ocean Levels
 *
 *  Date: Apr 8, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main(){
	double riseRate = 1.5;
	double result;

	printf("Ocean level currently rises at a rate of 1.5 millimeters per year\n");

	result = riseRate * 5;
	printf("Ocean levels in the next 5 years: %.1f\n", result);

	result = riseRate * 7;
	printf("Ocean levels in the next 7 years: %.1f\n", result);

	result = riseRate *10;
	printf("Ocean levels in the next 10 years: %.1f\n", result);

	return 0;
}

