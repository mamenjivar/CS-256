/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/24/2018
*
*
* Assignment: Final p1
* Dynamic Linked Library Main
*
* Description:
* Big Numbers
*/
#include "stdafx.h"
#include <iostream>
#include "BigNumbersLibrary.h"

using namespace std;

int main() {
	double a = 7.4;
	int b = 99;

	BigNumbers::Functions aa(34);
	BigNumbers::Functions bb(21);
	BigNumbers::Functions cc;

	cc = aa + bb;
	cc.print();

	cc = aa - bb;
	cc.print();

	cc = aa * bb;
	cc.print();

	cc = aa / bb;
	cc.print();

	cc = aa % bb;
	cc.print();

    return 0;
}

