/*
 * GeometryCalculator.c
 * Course: CS 256
 * Assignment: HW #3.4
 * Description: Chapter 9 Programming Challenge #10 p 546
 * Reverse Array
 *
 *  Date: Apr 15, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int *reverseArray(int reverse[], int size);

int main(){
	int SIZE = 6;
	int array[] = {2, 4, 6, 8, 10, 12};

	printf("Reverse Array\n\n");

	printf("The elements of this array is: ");

	for(int i = 0; i < SIZE; i++){
		printf("%d ", array[i]);
	}

	int *numbers = NULL;

	numbers = reverseArray(array, SIZE);

	printf("\n");

	printf("The elements of the reversed array is: ");
	for(int i = SIZE - 1; i >= 0; i--){
		printf("%d ", *(numbers + i));
	}

	return 0;
}

int *reverseArray(int reverse[], int size){
	int *arr = NULL;

	arr = reverse;

	return arr;
}
