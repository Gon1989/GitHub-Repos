#include <iostream>
#include <string>

//classes includes
#include "Information.h"
#include "GuessMyNumber.h"
#include "Programming.h"
#include "ProgrammingConcepts.h"



using namespace std;

//class objects to access them
Information objInfo;
GuessMyNumber gameObj;
Programming progObj;


int main() {
	
	//variables
	int choice = 0;

		while (choice != 7) {
		
			//display main menu
			cout << "------------------" << endl;
			cout << "|MANUAL MAIN MENU|" << endl;
			cout << "------------------\n" << endl;

			cout << "(1) Information" << endl;
			cout << "(2) About Me" << endl;
		 //	cout << "(3) Data Journal" << endl;
			cout << "(4) *Programming*" << endl;
		//	cout << "(5) Create a letter" << endl;
			cout << "(6) Guess My Number (MINI GAME)" << endl;
			cout << "(7) Exit\n" << endl;
			cout << "Enter option: ";

			cin >> choice;

			switch (choice) {

			case 1:
				objInfo.print();
				break;
			case 2:
				//About Me
				objInfo.aboutMe();
				break;
			case 3:
			
				break;
			case 4:
				//Programming concepts,algorithms and Information
				progObj.ProgrammingMenu();
				break;
			case 5:
				//Create letter class
				
				break;
			case 6:
				//guess my number function
				gameObj.GameMenu();
				break;
			case 7:
				exit(EXIT_SUCCESS);
				break;
			}

		}

	
	return 0;

}