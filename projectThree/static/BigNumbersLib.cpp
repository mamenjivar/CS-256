/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/24/2018
*
*
* Assignment: Final p1
* Static linked library 
*
* Description:
* Big Numbers
*/
#include "stdafx.h"
#include <vector>
#include "BigNumbersLib.h"
#include <stdexcept>

using namespace std;

namespace BigNumbers {
	/** 
	 *  Default constructor
	 */
	MyBigNumbers::MyBigNumbers() {
		num = 0;
	}

	/** 
	 *  Default Constructor #2
	 */
	MyBigNumbers::MyBigNumbers(int a) {
		num = a;
	}

	/** 
	 *  overloaded '+' operator
	 */
	MyBigNumbers MyBigNumbers::operator+(MyBigNumbers aso) {
		MyBigNumbers brandNew;

		brandNew.num = num + aso.num;
		return(brandNew);
	}

	/**
	 *  overloaded '-' operator
	 */
	MyBigNumbers MyBigNumbers::operator-(MyBigNumbers asi){
		MyBigNumbers brandNew;

		brandNew.num = num - asi.num;

		return (brandNew);
	}

	/**
	 *  overloaded '*' operator
	 */
	MyBigNumbers MyBigNumbers::operator*(MyBigNumbers aso) {
		MyBigNumbers brandNew;

		brandNew.num = num * aso.num;
		return (brandNew);
	}

	/**
	 *  overloaded '/' operator
	 */
	MyBigNumbers MyBigNumbers::operator/(MyBigNumbers aso) {
		MyBigNumbers brandNew;

		brandNew.num = num / aso.num;
		return (brandNew);
	}

	/**
	*  overloaded '%' operator
	*/
	MyBigNumbers MyBigNumbers::operator%(MyBigNumbers aso) {
		MyBigNumbers brandNew;

		brandNew.num = num % aso.num;
		return (brandNew);
	}

	/**
	 *  prints value of result
	 */
	void MyBigNumbers::print() {
		cout << num << endl;
	}
}