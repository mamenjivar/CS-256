/*
 * PatternDisplays.c
 * Course: CS 256
 * Assignment: HW #2.4
 * Pattern Displays
 *
 *  Date: Apr 8, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main(){
	printf("Pattern Displays\n\n");

	printf("Pattern A\n");
	for (int i = 1; i < 11; i++) {
		for (int j = 0; j < i; j++) {
			printf("+");
		}
		printf("\n");
	}

	printf("\n");
	printf("Pattern B\n");
	for (int i = 10; i > 0; i--){
		for (int j = 0; j < i; j++){
			printf("+");
		}
		printf("\n");
	}

	return 0;
}


