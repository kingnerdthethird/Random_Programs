#include <iostream>
#include <sstream>
#include "Element.h"

//global variables
int periodicTable[118] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118 };
//prototype functions
void AskForElement();
void LookUpElement(std::string element);
void PrintOutElement(int place);

//declare all elements in periodic table
Element H(periodicTable[0], "Hydrogen");
Element He(periodicTable[1], "Helium");
Element Li(periodicTable[2], "Lithium");
Element Be(periodicTable[3], "Beryllium");
Element B(periodicTable[4], "Boron");
Element C(periodicTable[5], "Carbon");
Element N(periodicTable[6], "Nitrogen");
Element O(periodicTable[7], "Oxygen");
Element F(periodicTable[8], "Fluorine");
//define functions
void AskForElement(){
	std::string element;
	std::cout << "Please input atomic number of element to look up: ";
	std::cin >> element;
	LookUpElement(element);
}

void LookUpElement(std::string element){
	int place = 0, length;
	length = element.length();
	for (int c = 0; c <= (length - 1); c++){
		place += element[c] - '0';
	}
	std::cout << "Looking up the element with " << element << " as an atomic number..." << std::endl;
	PrintOutElement(place);
}

void PrintOutElement(int place){
	if (place == 1){
		H.printAttributes();
	}
}