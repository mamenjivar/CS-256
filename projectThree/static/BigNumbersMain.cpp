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
#include "BigNumbersLib.h"

using namespace std;

int main()
{

	BigNumbers::MyBigNumbers aa(34);
	BigNumbers::MyBigNumbers bb(21);
	BigNumbers::MyBigNumbers cc;

	cc = aa + bb;
	cc.print();

	cc = aa - bb;
	cc.print();

	cc = aa / bb;
	cc.print();

	cc = aa * bb;
	cc.print();

	return 0;
}