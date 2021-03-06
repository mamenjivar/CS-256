// Name: Miguel Menjivar

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;



// BASE
class Animal {
private:
	int age;
	double cost;
	int babies;
	int food;
	double payoff;

public:
	Animal() {
		age = 0;
		cost = 0.0;
		babies = 0;
		food = 0;
		payoff = 0.0;
	}

	Animal(int age, int cost, int babies, int food, int payoff) {
		this->age = age;
		this->cost = cost;
		this->babies = babies;
		this->food = food;
		this->payoff = payoff;
	}

	~Animal() {
	}

	void setAge(int age) {
		this->age = age;
	}

	void setCost(double cost) {
		this->cost = cost;
	}

	void setBabies(int babies) {
		this->babies = babies;
	}

	void setFood(int food) {
		this->food = food;
	}

	void setPayoff(double payoff) {
		this->payoff = payoff;
	}

	// getters
	int getAge() const {
		return age;
	}

	double getCost() const {
		return cost;
	}

	double getBabies() const {
		return babies;
	}
	
	double getPayoff() const {
		return payoff;
	}

	int getFood() const {
		return food;
	}

	void incrementAge(int num) {
		age += num;
	}
};

// derived tiger
class Tiger : public Animal {
public:
	Tiger() : Animal() {

	}

	Tiger(int age, int cost, int babies, int food, int payoff) : Animal(age, cost, babies, food, payoff) {

	}

	~Tiger() {
	}
};

// derived polar bear
class PolarBear : public Animal {
public:
	PolarBear() : Animal() {

	}

	PolarBear(int age, int cost, int babies, int food, int payoff) : Animal(age, cost, babies, food, payoff) {

	}
};

// derived penguins
class Penguin : public Animal {
public:
	Penguin() : Animal() {

	}

	Penguin(int age, int cost, int babies, int food, int payoff) : Animal(age, cost, babies, food, payoff) {

	}
};

int bankAccount(int, int); // prototype exception
int randomNumber(); // prototype random event
void buyAnimal(); // buy animal 

// start with 100,000 dollars to start the game
int main() {
	vector<Tiger> t;
	vector<PolarBear> b;
	vector<Penguin> p;

	int bank = 100000; // start with 100,000 in budget

	Animal animal;
	Tiger tiger;
	PolarBear bear;
	Penguin penguin;

	// prices for each animal
	tiger.setCost(10000);
	bear.setCost(5000);
	penguin.setCost(1000);

	// babies
	tiger.setBabies(1);
	bear.setBabies(2);
	penguin.setBabies(3);

	// begin game
	cout << "ZOO TYCOON\n\n";

	int foodCost;
	cout << "Enter cost of food: ";
	cin >> foodCost;

	animal.setFood(foodCost);

	// beginning of game to choose animals
	int choice;
	bool loop = true;
	//int animalCount = 0;
	while (loop) {
		cout << "Budget: " << bank << endl;
		cout << "Choose an animal to buy from list below:" << endl;
		cout << "1) Tiger\n2) Polar Bear\n 3) Penguin\n 4) Exit" << endl;
		cout << "Choose: ";
		cin >> choice;


		if (choice == 1) {
			//bank -= tiger.getCost();
			//tigger.push_back(tiger)
			try {
				bank = bankAccount(bank, tiger.getCost());
				tiger.setAge(3);
				t.push_back(tiger);
			}
			catch (string negativeBalance) {
				cout << negativeBalance;
			}

		}
		else if (choice == 2) {
			//bank -= bear.getCost();
			try {
				bank = bankAccount(bank, bear.getCost());
				bear.setAge(3);
				b.push_back(bear);
			}
			catch (string negativeBalance) {
				cout << negativeBalance;
			}
		}
		else if (choice == 3) {
			//bank -= penguin.getCost();
			try {
				bank = bankAccount(bank, penguin.getCost());
				penguin.setAge(3);
				p.push_back(penguin);
			}
			catch (string negativeBalance) {
				cout << negativeBalance;
			}
		}
		else if (choice == 4) {
			loop = false;
			cout << endl;
		}
		else {
			cout << "invalid choice please choose again (1-4)" << endl;
		}
	}

	// day by day turn
	loop = true;
	while (loop) {
		// incrememt age of all animals in farm
		for (int i = 0; i < t.size(); i++) {
			t.at(i).incrementAge(1);
		}

		for (int i = 0; i < b.size(); i++) {
			b.at(i).incrementAge(1);
		}

		for (int i = 0; i < p.size(); i++) {
			p.at(i).incrementAge(1);
		}

		// random event that happens during game
		int animalChoice;
		if (randomNumber() == 1) {
			cout << "Animal died, which one do you want to die?\n";
			cout << "1) Tiger\n2) Polar Bear\n 3) Penguin\n";
			cin >> animalChoice;
			if (animalChoice == 1) {
				t.pop_back();
				bank -= tiger.getCost();
			}
			else if (animalChoice == 2) {
				b.pop_back();
				bank -= bear.getCost();
			}
			else if (animalChoice == 3) {
				p.pop_back();
				bank -= penguin.getCost();
			}

		}
		else if (randomNumber() == 2) {
			bank += t.size() * 250;
			bank += b.size() * 200;
			bank += p.size() * 100;
		}
		else if (randomNumber() == 3) {
			int choicebirth;
			cout << "animal has been born!" << endl;
			cout << "Which animal do you want born?\n";
			cout << "1) tiger\n2)polar bear\n3) penguin";
			cin >> choicebirth;

			if (choicebirth == 1) {
				t.push_back(tiger);
				t.back().setAge(0);
			}
			else if (choicebirth == 2) {
				b.push_back(bear);
				b.back().setAge(0);
			}
			else if (choicebirth == 3) {
				p.push_back(penguin);
				p.back().setAge(0);
			}
			else {
				cout << "invalid choice, please choose again(1-3)\n";
			}
		}
		else if (randomNumber() == 4) {
			cout << "Nothing happened today" << endl;
		}


		// feed all animals and calculate costs
		try {
			// tiger feed
			bank = bankAccount(bank, (t.size() * animal.getFood()) * 5);

			// bear feed
			bank = bankAccount(bank, (b.size() * animal.getFood()) * 3);

			// penguin feed
			bank = bankAccount(bank, (p.size() * animal.getFood()));
		}
		catch (string negativeBalance) {
			cout << negativeBalance;
		}

		cout << "Menu" << endl;
		cout << "1) Buy an animal?\n2)continue to next day\n3)End game\n";
		cin >> choice;

		if (choice == 1) {
			cout << "Budget: " << bank << endl;
			cout << "Choose an animal to buy from list below:" << endl;
			cout << "1) Tiger\n2) Polar Bear\n 3) Penguin\n 4) Exit" << endl;
			cout << "Choose: ";
			cin >> choice;


			if (choice == 1) {
				//bank -= tiger.getCost();
				//tigger.push_back(tiger)
				try {
					bank = bankAccount(bank, tiger.getCost());
					tiger.setAge(3);
					t.push_back(tiger);
				}
				catch (string negativeBalance) {
					cout << negativeBalance;
				}

			}
			else if (choice == 2) {
				//bank -= bear.getCost();
				try {
					bank = bankAccount(bank, bear.getCost());
					bear.setAge(3);
					b.push_back(bear);
				}
				catch (string negativeBalance) {
					cout << negativeBalance;
				}
			}
			else if (choice == 3) {
				//bank -= penguin.getCost();
				try {
					bank = bankAccount(bank, penguin.getCost());
					penguin.setAge(3);
					p.push_back(penguin);
				}
				catch (string negativeBalance) {
					cout << negativeBalance;
				}
			}
		}
		else if (choice == 2) {
			loop = true;
		}
		else if (choice == 3) {
			loop = false;
		}
		else {
			cout << "invalid choice, please choose again(1-3)\n";
		}

	}

	cout << "Exit loop" << endl;


    return 0;
}

// exception when user is broke
int bankAccount(int num1, int num2) {
	if ((num1 - num2) < 0) {
		string negativeBalance = "WARNING: you don't have enough funds\n";
		throw negativeBalance;
	}
	return num1 - num2;
}

// generates random event
int randomNumber() {
	return rand() % 5;
}

