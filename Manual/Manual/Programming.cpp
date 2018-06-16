#include "Programming.h"

#include <iostream>
#include <string>
#include "ProgrammingConcepts.h"
using namespace std;

//class
ProgrammingConcepts ProgConceptObj;

//constructor
Programming::Programming() {
	choice = 0;

}

//programming main menu loop
void Programming::ProgrammingMenu() {

	while (choice != 3) {
		system("CLS");
		cout << "Programming Menu\n" << endl;

		cout << "(1) Concepts" << endl;
		cout << "(2) Sorting Algorithms" << endl;
		cout << "(3) Go Back" << endl;
		cout << "Enter option :";

		cin >> choice;

		switch (choice) {
		case 1: 
			//call concepts class
			ProgConceptObj.ProgrammingConceptsMenu();
			break;
		case 2:
			//call sorting algorithsm
			
			break;
		case 3:
			//go back
			break;
		}

	}

}

//garbage collector
Programming::~Programming() {

}
