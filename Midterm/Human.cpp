/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 6/1/2018
*
* Assignment: Midterm
* Human.cpp
*
* Description:
* Human of the class
*/
#include "stdafx.h"
#include "Human.h"
#include <string>

using namespace std;

/*
 * Default constructor 
 */
Human::Human() {
	name = "";
	age = 0;
	sex = 0;
}

/*
 * Default constructor with three argumetns 
 */
Human::Human(string n, int a, char s) {
	name = n;
	age = a;
	sex = s;
}

// setters
void Human::setName(string n) {
	name = n;
}

void Human::setAge(int a) {
	age = a;
}

void Human::setSex(char c) {
	sex = c;
}


// getters
string Human::getName() const {
	return name;
}

int Human::getAge() const {
	return age;
}

char Human::getSex() const {
	return sex;
}

string Human::work()
{

	return string();
}
