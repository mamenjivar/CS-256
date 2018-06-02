/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 6/1/2018
*
* Assignment: Midterm
* Parent.cpp
*
* Description:
* Parent of the class
*/
#pragma once
#include "stdafx.h"
#include "Parent.h"
#include "Human.h"
#include "Child.h"
#include <string>

/*
 *Should be able to assign children as they are created 
 */
void Parent::setChildren(Child c) {
	children.push_back(c);
}

// review it later on
Child Parent::getChildren() const {
	return children.front();
}