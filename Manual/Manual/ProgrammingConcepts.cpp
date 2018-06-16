#include "ProgrammingConcepts.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
ProgrammingConcepts::ProgrammingConcepts() {
	choice = 0;

}

//function to display menu in this class
void ProgrammingConcepts::ProgrammingConceptsMenu() {

	while (choice != 7) {
		system("CLS");
		cout << "Welcome to Programming Concepts\n" << endl;
		cout << "(1) Big O" << endl;
		cout << "(2) Arrays" << endl;
		cout << "(3) Inheritance" << endl;
		cout << "(4) Polymorphism" << endl;
		cout << "(5) Encapsulation" << endl;
		cout << "(6) Pass by value, reference, pointer" << endl;
		cout << "(7) Go Back" << endl;
		cout << "Enter option: ";

		cin >> choice;

		switch (choice) {
		case 1:
			//Call BIg Oh function
			bigO();
			break;
		case 2:
			//call array function
			arrays();
			break;
		case 3:
			//call inheritance information
			inheritanceInfo();
			break;
		case 4:
			//call 
			polymorphism();
			break;
		case 5:
			//call encapsulation
			encapsulation();
			break;
		case 6:
			//go back
			break;
		}
	}
	
}

///OOPS concepts
///Write automation test cases / equivalent tasks.

//function to display inheritance concept information
void ProgrammingConcepts::inheritanceInfo() {
	cout << "-------------" << endl;
	cout << "|Inheritance|" << endl;
	cout << "-------------" << endl;

	cout <<"Is the process by which objects of one class acquire the properties of objects of another class" << endl
		<< "It supports the concept of hierarchical classification. Inheritance provides re usability." << endl
		<< "This means that we can add additional features to an existing class without modifying it\n" << endl;
	cout << "-Sub Class vs Super Class:"<< endl;
	cout << "Sub Class   : The class that inherits properties from" << endl 
		 << "another class is called Sub class or Derived Class\n." << endl
		 << "Super Class : The class whose properties are inherited" << endl 
		 << "by sub class is called Base Class or Super class.\n" << endl;
	cout << "-Why use Inheritance?\n" << endl
		<< "The idea of inheritance is simple, a class is based on" << endl
		<< "another class and uses data and implementation of the other class." << endl
		<< "The purpose of inheritance is Code Reuse." << endl;

	cout << "Implementing inheritance in C++: For creating a sub-class which is" << endl
		<< "inherited from the base class we have to follow the below syntax.\n" << endl
		<< "SYNTAX: \n" << endl

		<< "class subclass_name : access_mode base_class_name" << endl
		<< "{" << endl
		<< "//body of subclass" << endl
		<< "};\n" << endl;
		


}

//function to display Big O
void ProgrammingConcepts::bigO() {

	cout << "-------" << endl;
	cout << "|BIG O|" << endl;
	cout << "-------\n" << endl;
	
	cout << "Analogy:" << endl;
	cout <<"Let's say you're making dinner for your family.O is the process of following a recipe, and n is the number" << endl
		<< "of times you follow a recipe.\n" << endl
		<< "O - you make one dish that everyone eats whether they like it or not.You follow one recipe from top to bottom, " << endl
		<< "then serve(1 recipe). <--How I grew up\n" << endl
		<< "O(n) - you make individual dishes for each person.You follow a recipe from top to bottom" << endl
		<< "for each person in your family(recipe times the number of people in your family).\n" << endl
		<< "O(n ^ 2) - you make individual dishes redundantly for every person.You follow all recipes" << endl
		<< "for each person in your family(recipe times the number of people squared\n)." << endl
		<< "O(log n) - you break people into groups according to what they want and make larger portions." << endl
		<< "You make one dish for each group(recipe times request\n)﻿" << endl;

}

//function to display Arrays
void ProgrammingConcepts::arrays() {
	//var
	int choice = 0;

		//Title
		cout << "--------" << endl;
		cout << "|Arrays|" << endl;
		cout << "--------\n" << endl;

		//explanation
		cout << "Array: Is a collection of items stored them together at continous" << endl
			<< "Memory locations. The idea is to groupd them by the same type\n" << endl;
		//declare an array
		cout << "In C/C++, we can declare an array by specifying its and size or by initializing it or by both." << endl
			<< "// Array declaration by initializing elements\n" << endl
			<< "Example:" << endl
			<< "	int arr[] = { 10, 20, 30, 40 } " << endl
			<< "// Compiler creates an array of size 4. " << endl
			<< "// above is same as: int arr[4] = { 10, 20, 30, 40 }\n" << endl

			<< "//Array declaration by specifying size and initializing elements" << endl
			<< "	int arr[6] = { 10, 20, 30, 40 }" << endl

			<< "// Compiler creates an array of size 6, initializes first " << endl
			<< "// 4 elements as specified by user and rest two elements as 0." << endl
			<< "// above is same as  int arr[] = {10, 20, 30, 40, 0, 0} \n" << endl;

		//options
		cout << "Enter option: " << endl;
		cout << "(1) Example 1" << endl;
		cout << "(2) Go back" << endl;
		//user input
		cin >> choice;

		switch (choice) {
		case 1:
			//call array example1
			arrayExample1();
			break;
		case 2:
			//go back to previous menu
			break;
		}
	
}

//function to fill up an array
void ProgrammingConcepts::arrayExample1() {
	//array
	int numbers[10][10];
	//vars
	int col;
	int row;

	cout << "Enter number of row: ";
	cin >> row;
	cout << "Enter number of col: ";
	cin >> col;

	//run thru row and col, and populate the 2D array
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter a number [" << i << "][" << j << "]: ";
			//store user input into variables from the array
			cin >> numbers[i][j];
		}
	}
	//display fix
	cout << "" << endl;
	//display array with the populated values that user introduce
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << numbers[i][j];
		}
		//space to show 2D array
		cout << "\n" << endl;
	}
	cout << "\n" << endl;
}

//function to display Polymorphism
void ProgrammingConcepts::polymorphism() {
	//display title
	cout << "--------------" << endl
		 << "|Polymorphism|" << endl
		 << "--------------" << endl;
	//explanation

	cout << "Polimorphism is the ability to reuse a a function or message and   " << endl
		<< " display it in different forms. " << endl
		<< " A real life polymorphgism example would be aperson that a person " << endl
		<< " at a same time has can have different characteristics. \n" << endl
		<< " Types of Polymorphism: Compile time, Runtime \n" << endl

		<< "Compile time polymorphism : This type of polymorphism is achieved " << endl
		<< "by function overloading or operator overloading.\n" << endl

		<< "Function Overloading : When there are multiple functions with same" << endl
		<< "name but different parameters then these functions" << endl
		<< "are said to be overloaded.Functions can be overloaded by change" << endl
		<< "in number of arguments or / and change in type of arguments.\n" << endl

		// C++ program for function overloading

		<< "#include <bits/stdc++.h>" << endl
		<< "using namespace std;" << endl
		<< "class Geeks {" << endl
		<< "public:" << endl

		<< "	// function with 1 int parameter" << endl
		<< "	void func(int x) {" << endl
		<< "		cout << 'value of x is ' << x << endl;" << endl
		<< "	}" << endl
		<< "	// function with same name but 1 double parameter" << endl
		<< "	void func(double x) {" << endl
		<< "		cout << ' value of x is ' << x << endl;" << endl
		<< "	}" << endl
		<< "	// function with same name and 2 int parameters" << endl
		<< "	void func(int x, int y) {" << endl
		<< "		cout << 'value of x and y is ' << x << ', ' << y << endl;" << endl
		<< "	}" << endl
		<< "};" << endl

		<< "Then in main we call 'func' method " << endl

		<< "int main() {" << endl

		<< "Geeks obj1;" << endl

		<< "// Which function is called will depend on the parameters passed" << endl
		<< "// The first 'func' is called" << endl
		<< "obj1.func(7);\n" << endl

		<< "// The second 'func' is called" <<endl  
		<< "obj1.func(9.132)\n;" << endl

		<< "// The third 'func' is called" << endl
		<< "obj1.func(85, 64);" << endl
		<< "return 0;" << endl
		<< "}\n" << endl

		<< "" << endl;


}

//function to display encapsulation info
void ProgrammingConcepts::encapsulation() {
	cout << "\n" << endl
		<< "In Object Oriented Programming, Encapsulation is defined as binding together" << endl
		<< "the data and the functions that manipulates them.\n" << endl
		<< "Encapsulation also lead to data abstraction or hiding. As using encapsulation also hides the data.\n " << endl
		<< " " << endl
		<< "In C++ encapsulation can be implemented using Class and access modifiers.Look at the below program :" << endl

		<< "// C++ program to explain Encapsulation" << endl

		<< "#include<iostream>" << endl
		<< "using namespace std;" << endl

		<< "class Encapsulation" << endl
		<< "{" << endl
		<< "private:" << endl
		<< "// data hidden from outside world" << endl
		<< "int x;" << endl

		<< "public:" << endl
		<< "// function to set value of " << endl
		<< "// variable x" << endl
		<< "void set(int a)" << endl
		<< "{" << endl
		<< "	x = a;" << endl
		<< "}" << endl

		<< "// function to return value of" << endl
		<< "// variable x" << endl
		<< "int get()" << endl
		<< "	{" << endl
		<< "	return x;" << endl
		<< "}" << endl
		<< "};" << endl

		<< "// main function" << endl
		<< "int main()" << endl
		<< "{" << endl
		<< "	Encapsulation obj;" << endl

		<< "	obj.set(5);" << endl

		<< "	cout << obj.get();" << endl
		<< "	return 0;" << endl
		<< "}\n" << endl
		<< "This will return 5" << endl
		<< "In the above program the variable x is made private. " << endl
		<< "This variable can be accessed and manipulated only using the functions" << endl
		<< "get() and set() which are present inside the class. Thus we can say that here," << endl
		<< "the variable x and the functions get() and set() are binded together which is nothing but encapsulation.\n" << endl;
}



//garbage collector
ProgrammingConcepts::~ProgrammingConcepts() {

}








