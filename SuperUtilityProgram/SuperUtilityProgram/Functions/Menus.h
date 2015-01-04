#include <iostream>
#include "UtilityFunctions.h"
#include "Menus\UtilityMenu.h"
#include "Menus\MathMenu.h"
#include "Menus\ScienceMenu.h"
#include "Menus\DemonstrationMenu.h"
#include "Menus\EulerMenu.h"
using namespace std;

//global variables


//prototype functions
void MenuOfSubmenus();
void GoToSubmenus();
//define functions
void MenuOfSubmenus(){
	cout << "Please choose the number of the submenu to go to:" << endl;
	cout << "1. Utility\n";
	cout << "2. Math\n";
	cout << "3. Science\n";
	cout << "4. Demonstrations\n";
	cout << "5. Project Euler Problems";
	GoToSubmenus();
}

void GoToSubmenus(){
	string choice;
	int convertedChoice;
	cout << "> ";
	cin >> choice;
	convertedChoice = ConvertString(choice);
	if (convertedChoice == 1){

	}
	else if (convertedChoice == 2){

	}
	else if (convertedChoice == 3){

	}
	else if (convertedChoice == 4){

	}
	else if (convertedChoice == 5){

	}
}