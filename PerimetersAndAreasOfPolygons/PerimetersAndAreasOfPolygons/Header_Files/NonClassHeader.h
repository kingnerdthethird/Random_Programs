#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include "Circle.h"
#include "Decagon.h"
#include "Dodecagon.h"
#include "Hendecagon.h"
#include "Heptagon.h"
#include "Hexagon.h"
#include "Ngon.h"
#include "Nonagon.h"
#include "Octagon.h"
#include "Pentagon.h"
#include "Rectangle.h"
#include "Triangle.h"
#define pi 3.141592654 //used to define the number pi
using namespace std;

//functions below are for running all the other classes/functions in other header files.
void chooseShape(){
	int choice;

	cout << "Please choose a shape to create." << endl;
	cout << "1. Circle" << endl;
	cout << "2. N-gon" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Rectangle" << endl;
	cout << "5. Pentagon" << endl;
	cout << "6. Hexagon" << endl;
	cout << "7. Heptagon" << endl;
	cout << "8. Octagon" << endl;
	cout << "9. Nonagon" << endl;
	cout << "10. Decagon" << endl;
	cout << "11. Hendecagon" << endl;
	cout << "12. Dodecagon" << endl;
	cin >> choice;

	if (choice == 1){
		createCircle();
	}
	else if (choice == 2){
		createNgon();
	}
	else if (choice == 3){
		createTriangle();
	}
	else if (choice == 4){
		createRectangle();
	}
	else if (choice == 5){
		createPentagon();
	}
	else if (choice == 6){
		createHexagon();
	}
	else if (choice == 7){
		createHepatagon();
	}
	else if (choice == 8){
		createOctagon();
	}
	else if (choice == 9){
		createNonagon();
	}
	else if (choice == 10){
		createDecagon();
	}
	else if (choice == 11){
		createHendecagon();
	}
	else if (choice == 12){
		createDodecagon();
	}

	else{
		cout << "Please choose another number..." << endl;
		chooseShape();
	}
	chooseToContinue();
}

void chooseToContinue(){
	int answer;
	cout << "Would you like to continue?" << endl;
	cout << "1. Yes \n2. No" << endl;
	cin >> answer;
	if (answer == 1){
		chooseShape();
	}
	else if (answer == 2){
		cout << "Goodbye" << endl;
	}
	else{
		cout << "Please select yes or no." << endl;
		chooseToContinue();
	}
}

void printBox(){
	cout << "++++++++++++++++++++" << endl;
	for (int a = 1; a <= 18; a++){
		cout << "+++              +++" << endl;
	}
	cout << "++++++++++++++++++++" << endl;
}