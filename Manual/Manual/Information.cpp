#include "Information.h"
#include <iostream>
#include <string>

using namespace std;

Information::Information() {

}

void Information::print() {
	cout << "Hello!, This program is to " << endl;
	cout << "understand core concepts of programming. " << endl;
	cout << "So you can learn more about C++, OOP concepts and a little bit of math." << endl;
	cout << "Enjoy! \n" << endl;
}

void Information::aboutMe() {
	cout << "My name is Gonzalo" << endl;
	cout << "I'm from Chile, a skinny and long country in South America" << endl;
	cout << "I started 2014 studying Computer Science and graduated in 2018" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
}

Information::~Information()
{
}
