/*
 * GeometryCalculator.c
 * Course: CS 256
 * Assignment: HW #3.3
 * Tic-Tac-Toe
 *
 *  Date: Apr 15, 2018
 *      Author: Miguel Menjivar
 */
#include <stdio.h>

int main() {
	char ttt[3][3] = { { '*', '*', '*' }, { '*', '*', '*' }, { '*', '*', '*' } };
	int row;
	int column;
	int count = 0;

	printf("Tic-Tac-Toe Game\n\n");
	//int i;

	// printing out tic tac toe board
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c ", ttt[i][j]);
		}
		printf("\n");
	}

	int a = 1;
	while (a != 0) {

		printf("\n");
		printf("Player 1:\n");

		printf("Enter row number: ");
		fflush(stdout);
		scanf("%d", &row);
		row--;

		printf("Enter column number: ");
		fflush(stdout);
		scanf("%d", &column);
		column--;

		ttt[row][column] = 'X';
		count++;

		printf("\n\n");

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%c ", ttt[i][j]);
			}
			printf("\n");
		}

		if(count == 9){
			printf("It is a tie!");
			break;
		}

		// row wins for X
		if ((ttt[0][0] == 'X') && (ttt[0][1] == 'X') && (ttt[0][2] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		} else if ((ttt[1][0] == 'X') && (ttt[1][1] == 'X') && (ttt[1][2] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		} else if ((ttt[2][0] == 'X') && (ttt[2][1] == 'X')	&& (ttt[2][2] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		}
		// column wins for X
		else if ((ttt[0][0] == 'X') && (ttt[1][0] == 'X') && (ttt[2][0] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		} else if ((ttt[0][1] == 'X') && (ttt[1][1] == 'X')	&& (ttt[2][1] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		} else if ((ttt[0][2] == 'X') && (ttt[1][2] == 'X')	&& (ttt[2][2] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		}
		// diagonal wins for X
		else if ((ttt[0][0] == 'X') && (ttt[1][1] == 'X') && (ttt[2][2] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		} else if ((ttt[0][2] == 'X') && (ttt[1][1] == 'X') && (ttt[2][0] == 'X')) {
			printf("Player 1 Wins!!!");
			break;
		}

		printf("\n");
		printf("Player 2:\n");

		printf("Enter row number: ");
		fflush(stdout);
		scanf("%d", &row);
		row--;

		printf("Enter column number: ");
		fflush(stdout);
		scanf("%d", &column);
		column--;

		ttt[row][column] = 'O';
		count++;

		printf("\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%c ", ttt[i][j]);
			}
			printf("\n");
		}

		// row wins for O
		if ((ttt[0][0] == 'O') && (ttt[0][1] == 'O') && (ttt[0][2] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		} else if ((ttt[1][0] == 'O') && (ttt[1][1] == 'O')	&& (ttt[1][2] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		} else if ((ttt[2][0] == 'O') && (ttt[2][1] == 'O') && (ttt[2][2] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		}
		// column wins for O
		else if ((ttt[0][0] == 'O') && (ttt[1][0] == 'O') && (ttt[2][0] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		} else if ((ttt[0][1] == 'O') && (ttt[1][1] == 'O')	&& (ttt[2][1] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		} else if ((ttt[0][2] == 'O') && (ttt[1][2] == 'O') && (ttt[2][2] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		}
		// diagonal wins for O
		else if ((ttt[0][0] == 'O') && (ttt[1][1] == 'O') && (ttt[2][2] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		} else if ((ttt[0][2] == 'O') && (ttt[1][1] == 'O') && (ttt[2][0] == 'O')) {
			printf("Player 2 Wins!!!");
			break;
		}
	}

	return 0;
}

