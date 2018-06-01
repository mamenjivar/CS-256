/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/24/2018
*
*
* Assignment: Final p1
* Dynamic Linked Library Header
*
* Description:
* Big Numbers
*/
#include <vector>
#include <iostream>

using namespace std;

namespace BigNumbers {
	class MyBigNumbers {
	public:
		vector<int> big;
		vector<MyBigNumbers> bigger;

		/**
		 *  Default Constructor #1
		 */
		MyBigNumbers();

		/**
		 *  Constructor #2
		 */
		MyBigNumbers(int);

		/**
		 * Holds value of 'Big number' 
		 */
		int num;

		/**
		 *  overloaded '+' operator
		 */
		MyBigNumbers operator+(MyBigNumbers);
		//MyBigNumbers operator + (const MyBigNumbers &vec) const;
		
		/**
		 *  overloaded '-' operator
		 */
		MyBigNumbers operator-(MyBigNumbers);

		/**
		 *  overloaded '*' operator
		 */
		MyBigNumbers operator*(MyBigNumbers);

		/**
		 *  overloaded '/' operator
		 */
		MyBigNumbers operator/(MyBigNumbers);

		/**
		 *  overloaded '%' operator
		 */
		MyBigNumbers operator%(MyBigNumbers);

		/**
		 *  prints value of result
		 */
		void print();
	};
}