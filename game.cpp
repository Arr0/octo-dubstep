#include <iostream>
#include <string>

using namespace std;

class Zombie {
private:
public:
};

void game() {

	system("cls");

	bool gameOver = false;

	// Player input storage
	string input;

	// Player variables
	int health = 100;
	string name;

	// Player items
	bool knife = false;
	int food = 0;

	// Game objectives
	bool objectiveOne = false;
	bool objectiveTwo = false;
	bool objectiveThree = false;
	bool objectiveFour = false;
	bool gameComplete = false;

	// Main game loop
	while(gameOver != true) {

		cout << "You've woken up from a long sleep and have discovered that there has been" << endl
			 << "a zombie outbreak." << endl << endl
			 << "You need to get the quarantine zone where there is protection from zombies," << endl
			 << "but to get there without dying you're gonna need some protection." << endl << endl;
		
		// Second game loop
		while(gameComplete != true) {

			switch(objectiveOne) {

			case false:
				cout << "--Objective 1---------------------------------------------------------------" << endl;
				cout << "  Search the kitchen" << endl;
				cout << "----------------------------------------------------------------------------" << endl << endl;
				
				while(objectiveOne != true) {
					cout << "> ";
					getline(cin, input);
					if(input == "hint") {
						cout << endl << "--Hint------------------------------------------------------------------------" << endl;
						cout << "  You're in a kitchen so maybe try looking in drawers, cupboards and the fridge." << endl;
						cout << "------------------------------------------------------------------------------" << endl << endl;
					} else if(input == "pass") {
						objectiveOne = true;
					} else if(input == "look in drawers") {
						cout << "You look in the drawers and find some knives, you grab the biggest one."
						     << endl <<  "You now have a knife." << endl << endl;
						knife = true;
					} else if(input == "look in cupboards") {
						cout << "You find some chocolate, crisps and biscuits." << endl << endl;
						food += 3;
					} else if(input == "look in fridge") {
						cout << "You look in the fridge and find some water but no food." << endl << endl;
						food += 1;
					} else {
						cout << endl << "If your command didn't work try writing it all in lowercase or" << endl
							 << "instead of writing \"look in the fridge\" try writing \"look in fridge\"." << endl << endl;
					}
					if(knife == true && food > 2) {
						cout << "You've successfully found a knife and collected some food." << endl << endl;
						cout << "--Objective 1---------------------------------------------------------------" << endl;
						cout << "  Search the kitchen - Complete" << endl;
						cout << "----------------------------------------------------------------------------" << endl << endl;
						objectiveOne = true;
					}
				}
				break;

			default:
				cout << "Error 001";
				break;
			}

			switch(objectiveTwo) {

			case false:
				cout << "--Objective 2---------------------------------------------------------------" << endl;
				cout << "  Make it across town" << endl;
				cout << "----------------------------------------------------------------------------" << endl << endl;

				while(objectiveTwo != true) {
					cout << "As soon as you open the door you see a lone zombie at your gate," << endl
						 << " you can try to sneak past the zombie or attack it."  << endl
						 << "Would you like to sneak or attack the zombie head on?" << endl << endl;
					cout << "> ";
					getline(cin, input);
					if(input == "hint") {
						cout << endl << "--Hint------------------------------------------------------------------------" << endl;
						cout << "You're in a kitchen so maybe try looking in drawers, cupboards and the fridge." << endl;
						cout << "------------------------------------------------------------------------------" << endl << endl;
					} else if(input == "look in drawers") {
						cout << "You look in the drawers and find some knives, you grab the biggest one."
						     << endl <<  "You now have a knife." << endl << endl;
					} else if(input == "look in cupboards") {
						cout << "You find some chocolate, crisps and biscuits." << endl << endl;
					} else if(input == "look in fridge") {
						cout << "You look in the fridge and find some water but no food." << endl << endl;
					} else {
						cout << endl << "If your command didn't work try writing it all in lowercase or" << endl
							 << "instead of writing \"look in the fridge\" try writing \"look in fridge\"." << endl << endl;
					}
					if(knife == true && food > 2) {
						cout << "You've successfully found a knife and collected some food." << endl << endl;
						cout << "--Objective 1---------------------------------------------------------------" << endl;
						cout << "  Search the kitchen - Complete" << endl;
						cout << "----------------------------------------------------------------------------" << endl << endl;
						objectiveOne = true;
					}
				}
				break;

			default:
				cout << "Error 001";
				break;
			}

			gameComplete = true;

		}
		gameOver = true;
	}
}

void about() {
	system("cls");
	cout << endl << "WIP" << endl << endl;
	cout << "-----------------------------" << endl << endl;
}

int main() {

	bool start = true;

	while(start != false) {
		string playerInput;

		cout << "Zombie Game" << endl << endl;

		cout << "1. Play" << endl;
		cout << "2. About" << endl;
		cout << "3. Exit" << endl << endl;

		cout << "> ";
		getline(cin, playerInput);

		if(playerInput == "play") {
			game();
		} else if(playerInput == "about") {
			about();
		} else if(playerInput == "") {
			start = false;
		}

	}

	return 0;
}
