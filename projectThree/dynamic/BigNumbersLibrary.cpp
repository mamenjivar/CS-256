/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/24/2018
*
*
* Assignment: Final p1
* Dynamic Linked Library
*
* Description:
* Big Numbers
*/
#include "stdafx.h"
#include "BigNumbersLibrary.h"
#include <iostream>

using namespace std;

namespace BigNumbers {

	/**
	 *  Default Constructor #1
	 */
	Functions::Functions() {
		num = 0;
	}

	/**
	 *  Constructor #2
	 */
	Functions::Functions(int n) {
		num = n;
	}

	/**
	 *  overload '+' operator
	 */
	Functions Functions::operator+(Functions aso) {
		Functions brandNew;

		brandNew.num = num + aso.num;
		return (brandNew);
	}

	/**
	 *  overload '-' operator
	 */
	Functions Functions::operator-(Functions aso) {
		Functions brandNew;

		brandNew.num = num - aso.num;
		return (brandNew);
	}

	/**
	 *  overload '*' operator
	 */
	Functions Functions::operator*(Functions aso) {
		Functions brandNew;

		brandNew.num = num - aso.num;
		return (brandNew);
	}

	/**
	 *  overload '/' operator
	 */
	Functions Functions::operator/(Functions aso) {
		Functions brandNew;

		brandNew.num = num / aso.num;
		return (brandNew);
	}

	/**
	 *  overload '%' operator
	 */
	Functions Functions::operator%(Functions aso) {
		Functions brandNew;

		brandNew.num = num % aso.num;
		return (brandNew);
	}

	/**
	 *  prints value
	 */
	void Functions::print() {
		cout << num << endl;
	}
}

