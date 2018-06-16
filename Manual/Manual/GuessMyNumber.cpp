#include "GuessMyNumber.h"
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//constructor
GuessMyNumber::GuessMyNumber() {
	userNumber = 0;
	secretNumber = 0;
	choice = 0;
	lives = 4;
	win = false;
}

//class GameMenu
void GuessMyNumber::GameMenu() {
	system("CLS");
	//main loop of menu
	cout << "Game Menu\n" << endl;
	cout << "(1) Instructions" << endl;
	cout << "(2) Play game" << endl;
	cout << "(3) Go back" << endl;
	
	//get user input
	cin >> choice;
	
	switch (choice) {
	case 1:
		//display instructions of the game
		gameInstruction();
		break;
	case 2:
		//Run the game
		playTheGame();
		break;
	case 3:
		//go back to main menu
		break;
	}

}

//function to display instructions of the game
void GuessMyNumber::gameInstruction() {
	cout << "Welcome to Guess My Number!\n" << endl;
	cout << "To Win the game you need to guess the secret number " << endl;
	cout << "This secret number is chosen randomly by the computer " << endl;
	cout << "Your computer will give you some hints to help you " << endl;
	cout << "If you guess the number before running out tries," << endl;
	cout << "YOU WIN!" << endl;
	cout << "Good Luck!...\n" << endl;
	
}

//function to run the game
void GuessMyNumber::playTheGame() {

	cout << "*Welcome Player*\n" << endl;

	//computer pick a random seed
	unsigned seed = time(0);
	srand(seed);
	//1 - 100
	secretNumber = rand() % 100 + 1;

	cout << "The Computer picked a number between 1 - 100" << endl;
	cout << "Enter your guess!" << endl;
	//user input
	cin >> userNumber;
	//keep playing until player wins
	
	//if user guess wrong
	while (!win) {
		//if our guess is lower
		if (userNumber < secretNumber) {
			cout << "Secret Number is Higher! " << endl;
			//subtract 1 try
			lives--;
			cin >> userNumber;
		}
		//if our guess is higher
		else if (userNumber > secretNumber) {
			cout << "Secret Number is Lower! " << endl;
			//subtract 1 try
			lives--;
			cin >> userNumber;
		}
		else {
			//WIN
			cout << "Correct! " << endl;
			cout << "The secret number was: " << secretNumber << endl;
			cout << "Lives remaining: " << lives << endl;
			cout << "|--WINNER!--|" << endl;
			cout << "|-----------|" << endl;
			cout << "\n";
			//we WIN!
			win = true;
		}
	}



}

//garbage collector
GuessMyNumber::~GuessMyNumber() {

}
