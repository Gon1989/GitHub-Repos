#pragma once
#include <string>

class GuessMyNumber {

private:
	int userNumber;
	int secretNumber;
	int lives;
	int choice;
	bool win;

public:
	GuessMyNumber();
	
	void GameMenu();
	void gameInstruction();
	void playTheGame();

	~GuessMyNumber();
};

