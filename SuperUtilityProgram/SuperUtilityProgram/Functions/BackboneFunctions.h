#include <iostream>
#include <sstream>
#include "Menus.h"
#include "UtilityFunctions.h"
using namespace std;

//global variables
string userName;

//prototype functions
void Startup();
void returnToMenu();
void Continue();

//define functions
void Startup(){
	cout << "Starting..." << endl;
	cout << "Hello! I am the Super Utility Program!" << endl;
	cout << "What is your name?" << endl;
	cout << "> ";
	cin >> userName;
	cout << "Hello " << userName << "!" << endl;
	cout << "I can do a lot of utilities to help you!" << endl;
	ClearScreen();
	MenuOfSubmenus();
}

void returntToMenu(){
	ClearScreen();
	MenuOfSubmenus();
}

void Continue(){
	string answer;
	int convertedAnswer;
	cout << "\n\nHello " << userName << ", would you like to continue?" << endl;
	cout << "1. Yes\n2. No" << endl;
	cout << "> ";
	cin >> answer;

	convertedAnswer = ConvertString(answer);

	if (convertedAnswer == 1){
		cout << "Okay, running again!" << endl;
		ClearScreen();
		MenuOfSubmenus();
	}

	else if (convertedAnswer == 2){
		ClearScreen();
		cout << "Okay, glad I could help you." << endl;
		cout << "GOODBYE" << endl;
		system("pause");
	}

	else{
		ClearScreen();
		cout << "Please input number of YES or NO" << endl;
		Continue();
	}
}
