/*
 * TheaterSeating.c
 * Course: CS 256
 * Assignment: Project #1
 * Description: Chapter 9, Programming Challenge #20, p 454
 * Theater Seating
 *
 *  Date: Apr 18, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

void purchaseTicket(char countArray[15][30], int price[15]);
void totalTicketSold(char countArray[15][30], int total);
void seatingInformation();

int totalTicketSales = 0;

int main() {
	int ROW = 15;
	int SEATS = 30;
	int menu;
	int price[ROW];
	char theater[ROW][SEATS];

	// populating the theater class
	// EMPY SEATS = #
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			theater[i][j] = '#';
		}
	}

	printf("Theater Seating\n\n");

	// prompts user to enter the price of each row
	for (int i = 0; i < ROW; i++) {
		printf("Please enter the seat price for row #%d: ", (i + 1));
		fflush(stdout);
		scanf("%d", &price[i]);
	}

	printf("\n");

	printf("\t\t   Seats\n");
	printf("\t 123456789012345678901234567890\n");

	// printing out the theater seating chart
	for (int i = 0; i < 15; i++) {
		printf("Row %-5d", (i + 1));
		for (int j = 0; j < 30; j++) {
			printf("%c", theater[i][j]);
		}
		printf("\n");
	}

	int loop = 1;
	while (loop != 0) {

		printf("\n");

		printf("Main Menu\n");
		printf("1) Purchase ticket(s)\n");
		printf("2) Total amount tickets sold\n");
		printf("3) Seating information\n");
		printf("4) Exit Program\n");

		printf("Choose from the choices (1-4): ");
		fflush(stdout);
		scanf("%d", &menu);

		if (menu == 1) {
			purchaseTicket(theater, price);
		} else if (menu == 2) {
			totalTicketSold(theater, totalTicketSales);
		} else if (menu == 3) {
			seatingInformation(theater);
		} else if (menu == 4) {
			break;
		}
	}

	return 0;
}

/**
 * function will prompt user how many ticket(s) will be purchased
 * prompt user to input row and seat number
 * show transaction and display updated seating chart
 */
void purchaseTicket(char countArray[15][30], int price[15]) {
	int ticketAmount;
	int ticketTotal;
	int row = 0;
	int seat;

	printf("\nHow many ticket(s) would you like to buy: ");
	fflush(stdout);
	scanf("%d", &ticketAmount);

	for (int i = 0; i < ticketAmount; i++) {
		printf("ticket #%d\n", (i + 1));

		int check = 1;
		while (check != 0) {
			while (check != 0) {
				printf("Enter row number: ");
				fflush(stdout);
				scanf("%d", &row);

				if ((row > 15) || (row < 0)) {
					printf("Please enter a valid row number (1-15)\n");
				} else if (row <= 15) {
					break;
				}
			}

			while (check != 0) {
				printf("Enter seat number: ");
				fflush(stdout);
				scanf("%d", &seat);

				if ((seat > 30) || (seat < 0)) {
					printf("Please enter a valid seat number(1-30");
				} else if (seat <= 30) {
					break;
				}
			}

			if (countArray[row - 1][seat - 1] == '*') {
				printf("This seat has been taken, please choose another one\n");
			} else{
				countArray[row - 1][seat - 1] = '*';
				break;
			}
		}

		// keeps track of the total amount of tickets for the individual transaction
		ticketTotal = ticketTotal + price[row - 1];
	}

	printf("You bought %d ticket(s) at a total of $%d\n\n", ticketAmount, ticketTotal);

	// keeps track of total tickets sold for every transaction (sales)
	totalTicketSales += ticketTotal;

	printf("\t\t   Seats\n");
	printf("\t 123456789012345678901234567890\n");

	// printing out the theater seating chart
	for (int i = 0; i < 15; i++) {
		printf("Row %-5d", (i + 1));
		for (int j = 0; j < 30; j++) {
			printf("%c", countArray[i][j]);
		}
		printf("\n");
	}

}

/**
 * will show how many tickets sold in total
 * shows how much money made from tickets sold
 */
void totalTicketSold(char countArray[15][30], int totalTicket) {
	int count = 0;

	// will parse through theater seating chart
	//and check how many tickets have been sold so far
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			if (countArray[i][j] == '*') {
				count++;
			}
		}
	}

	printf("\nTotal number of ticket(s) sold: %d\n", count);
	printf("Total amount of ticket(s) sold: $%d.00\n", totalTicket);
}

/**
 * shows user the how many seats have been sold
 * how many seats are available in each row
 * how many seats are available in the whole auditorium
 */
void seatingInformation(char countArray[15][30]) {
	int rowCount[15];
	int rowTotal = 0;
	int count = 0;
	int seatAvailable = 450;

	// checks for how many seats have been sold total
	// checks for amount of seats available in each row
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 30; j++) {
			if (countArray[i][j] == '*') {
				count++;
				rowTotal++;
			}
		}
		rowCount[i] = 30 - rowTotal;
		rowTotal = 0;
	}

	printf("\nSeating Information:\n");

	// how many seats have been sold
	printf("The number of seats sold: %d\n", count);

	// how many seats available in each row
	for (int i = 0; i < 15; i++) {
		printf("Number of seats available in row #%d: %d\n", (i + 1), rowCount[i]);
	}

	// how many seats available in whole auditorium
	printf("The number of seats available in whole theater: %d\n", (seatAvailable - count));
}
