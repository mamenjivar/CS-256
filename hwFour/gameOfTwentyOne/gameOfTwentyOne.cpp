/*
 * Name: Miguel Menjivar
 * Course: CS 256
 * Date: 5/4/2018
 *
 * Assignment: HW #4.1
 * A Game of 21
 *
 * Description:
 * Programming a variation of the blackjack game
*/

#include "stdafx.h" // visual studio
#include <iostream>
#include <string>
#include "Die.h"

using namespace std;


int main() {
	// decision made by user (y/n)
	string choice;

	// total points so far in round for user
	int playerTotal = 0;

	// total points so far in round for computer
	int computerTotal = 0;

	Die d = Die();

	cout << "A Game of 21" << endl;
	cout << endl;

	bool gameLoop = true;
	while (gameLoop) {
		// computer turn
		while (computerTotal < 15) {
			d.roll();
			computerTotal += d.getValue();
		}

		cout << "COMPUTER TURN COMPLETED" << endl;
		cout << endl;

		// player turn
		bool playerLoop = true;
		while (playerLoop) {
			cout << "Would you like to roll the die? (Y/N)" << endl;
			cout << "Player: ";
			cin >> choice;
			choice[0] = tolower(choice[0]);

			// when user chooses yes to keep playing or no to stop playing
			if (choice == "y") {
				// roll the die
				d.roll();
				playerTotal += d.getValue();

				cout << "Player points: " << playerTotal << endl;
				cout << endl;
			}
			else {
				cout << endl;
				playerLoop = false;
			}

			// player automatically loses when exceeding over 21 points
			if (playerTotal > 21) {
				playerLoop = false;
				cout << "You have lost" << endl;
			}
		}

		cout << "Computer total points: " << computerTotal << endl;
		cout << "Player total points: " << playerTotal << endl;

		// if player wins the game
		if (playerTotal > computerTotal) {
			cout << "Player has won!" << endl;
			cout << endl;
		}
		else {
			cout << "Computer has won!" << endl;
			cout << endl;
		}

		cout << "Would you like to play again?" << endl;
		cout << "(Y/N): " << endl;
		cin >> choice;
		choice[0] = tolower(choice[0]);


		if (choice == "n") {
			gameLoop = false;
		}

		// setting values to default if user wants to play game again
		computerTotal = 0;
		playerTotal = 0;

	}

	return 0;
}