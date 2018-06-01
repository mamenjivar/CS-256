/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 5/24/2018
*
*
* Assignment: Final p1
* Dynamic Linked Library header
*
* Description:
* Big Numbers 
*/
#pragma once

#ifdef BIGNUMBERSLIBRARY_EXPORTS
#define BIGNUMBERSLIBRARY_API __declspec(dllexport)
#else
#define BIGNUMBERSLIBRARY_API __declspec(dllimport)
#endif

namespace BigNumbers {
	class Functions {
	public:
		int num;

		/**
		 *  Default Constructor #1
		 */
		BIGNUMBERSLIBRARY_API Functions();

		/**
		 * Constructor #2
		 */
		BIGNUMBERSLIBRARY_API Functions(int);

		/**
		 *  overload '*' operator
		 */
		BIGNUMBERSLIBRARY_API Functions operator*(Functions);

		/**
		 *  overload '-' operator
		 */
		BIGNUMBERSLIBRARY_API Functions operator-(Functions);

		/**
		 *  overload '+' operator
		 */
		BIGNUMBERSLIBRARY_API Functions operator+(Functions);

		/**
		 *  overload '/' operator
		 */
		BIGNUMBERSLIBRARY_API Functions operator/(Functions);

		/**
		 *  overload '%' operator
		 */
		BIGNUMBERSLIBRARY_API Functions operator%(Functions);

		/**
		 *  prints given value
		 */
		BIGNUMBERSLIBRARY_API void print();
	};
}