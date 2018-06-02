/*
* Name: Miguel Menjivar
* Course: CS 256
* Date: 6/1/2018
*
* Assignment: Midterm
* Child Header
*
* Description:
* Child of the class
*/
#pragma once
#ifndef CHILD_H
#define CHILD_H

class Child : public Human {
private:
	Parent mom;
	Parent dad;
	Child(); // default constructor

public:
	Child(Parent, Parent); // constructor will have 2 input parent arguments for Mom and Dad
};
#endif /* CHILD_H */