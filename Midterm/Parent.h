/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 6/1/2018
*
* Assignment: Midterm
* Parent Header
*
* Description:
* Parent of the class
*/
#pragma once
#ifndef PARENT_H
#define PARENT_H
#include <string>
#include <vector>
#include "Human.h"
#include "Child.h"

using namespace std;

class Parent : public Human {
private:
	vector<Child> children; // should be able to assign children as they are created
public:
	// setters
	void setChildren(Child);

	// getters
	Child getChildren() const;
};
#endif /* PARENT_H */