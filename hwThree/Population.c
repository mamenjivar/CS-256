/*
 * GeometryCalculator.c
 * Course: CS 256
 * Assignment: HW #3.2
 * Population
 *
 *  Date: Apr 15, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main() {
	int startSize = 0;
	int birthRate;
	int deathRate;
	int yearsDisplay;
	int result;

	printf("Population\n\n");

	while (startSize <= 2) {
		printf("Please input the starting size of population: ");
		fflush(stdout);
		scanf("%d", &startSize);

		if (startSize <= 2) {
			printf("Please enter a number higher than 2\n");
		}
	}

	while (birthRate < 0) {
		printf("Please input the annual birth rate: ");
		fflush(stdout);
		scanf("%d", &birthRate);

		if (birthRate < 0) {
			printf("Negative numbers are not accepted\n");
		}
	}

	while (deathRate < 0) {
		printf("Please input the annual death rate: ");
		fflush(stdout);
		scanf("%d", &deathRate);

		if (deathRate < 0) {
			printf("Negative numbers are not accepted");
		}
	}

	while (yearsDisplay <= 1) {
		printf("Please input number of years to display: ");
		fflush(stdout);
		scanf("%d", &yearsDisplay);

		if(yearsDisplay<= 1){
			printf("Please enter a number higher than 1\n");
		}
	}

	result = (startSize + (birthRate * startSize) - (deathRate * startSize)) * yearsDisplay;
	printf("\nSize of population for at year %d: %d", yearsDisplay, result);

	return 0;
}
