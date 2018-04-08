/*
 * RestaurantBill.c
 * Course: CS 256
 * Assignment: HW #2.1
 * Restaurant Bill
 *
 *  Date: Apr 8, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main(){
	double mealPrice = 88.67;
	double tax;
	double tip;
	double total;

	printf("Restaurant Bill\n\n");

	printf("Meal Cost: $%.2f\n", mealPrice);

	tax = mealPrice / 14.814;
	printf("Tax Amount: $%.2f\n", tax);

	tip = (mealPrice + tax) / 5;
	printf("Tip Amount: $%.2f\n", tip);

	total = mealPrice + tax + tip;
	printf("Total Bill: $%.2f\n", total);

	return 0;
}

