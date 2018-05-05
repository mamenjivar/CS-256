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
#pragma once
#ifndef DIE_H
#define DIE_H

class Die {
private:
	int sides; // number of sides
	int value; // the die's value

public:
	Die(int = 6); // Constructor
	void roll(); // rolls the die
	int getSides(); // return the number of sides
	int getValue(); // returns the die's value
};

#endif