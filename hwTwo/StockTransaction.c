/*
 * StockTransaction.c
 * Course: CS 256
 * Assignment: HW #2.3
 * Stock Transaction Program
 *
 *  Date: Apr 8, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main(){
	int stockOne;
	int commissionOne;
	int stockTwo;
	int commissionTwo;
	int result;


	printf("Stock Transaction Program\n\n");

	// 45500
	stockOne = 1000 * 45.50;
	printf("The amount of money Joe paid for the stock: $%d\n", stockOne);

	// 910
	commissionOne = stockOne / 50;
	printf("The amount of commission Joe paid broker when he bought the stock: $%d\n", commissionOne);

	// 56900
	stockTwo = 1000 * 56.90;
	printf("The amount that Joe sold the stock for: $%d\n", stockTwo);

	// 1138
	commissionTwo = stockTwo / 50;
	printf("The amount of commission Joe paid broker when he sold the stock: $%d\n", commissionTwo);

	// 11628 = 58038 - 46410
	result = (stockTwo + commissionTwo) - (stockOne + commissionOne);
	printf("Profit made: $%d\n", result);

	return 0;
}

