// midtermGuide.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Human {
private:
	string name;
	int age;
	char sex;
	/*Human();*/
	string job;
protected:
	Human(string, int, char);
public:
	Human();
	void setName(string);
	void setAge(int);
	void setSex(char);
	void setJob(string);

	string getName() const;
	int getAge() const;
	char getSex() const;
	string getJob() const;

	virtual string work();
};

Human::Human() {
	name = "";
	age = 0;
	sex = 0;
	job = "";
}

Human::Human(string n, int i, char c) {
	name = n;
	age = i;
	sex = c;
}

// setters
void Human::setName(string n) {
	name = n;
}

void Human::setAge(int i) {
	age = i;
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

void Human::setJob(string j) {
	job = j;
}

string Human::getJob() const {
	return job;
}

string Human::work() {
	return job;
}

class Parent : public Human {
private:
	vector<Child> children;
public:
	//void setChildren(vector<Child>);
	Child getChildren();

	string work(string);
};
//
class Child : public Human {
private:
	//Parent Mom;/*
	//Parent Dad;*/
	Child();
public:
	//Child(Parent, Parent);
	// should be able to change child's name
	string work(string);
};

//Child::Child(Parent m, Parent d) {
//
//
//}
//
//string Child::work(string w) {
//	setJob(w);
//}

int main()
{
	Human father;

	father.setName("Homer");
	father.setAge(36);
	father.setSex('M');
	father.setJob("Safety Inspector");




	cout << father.getName() << endl;


    return 0;
}

Child Parent::getChildren()
{
	return children;
}
