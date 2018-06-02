/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 6/1/2018
*
* Assignment: Midterm
* Human.h
*
* Description:
* Human of the class
*/
#pragma once
#ifndef HUMAN_H
#define HUMAN_H

#include <string>

using namespace std;

class Human {
private:
	string name;
	int age;
	char sex;
	Human(); // default constructor
protected:
	Human(string, int, char); // default constructor with three arguments
public:
	// setters
	void setName(string);
	void setAge(int);
	void setSex(char);
	void setJob(string);

	// getters
	string getName() const;
	int getAge() const;
	char getSex() const;
	string getJob() const;

	virtual string work();
};
#endif /* HUMAN_H */