#include "stdafx.h"
#include "Element.h"
#include <iostream>

Element::Element(int aN, std::string eN){
	atomicNumber = aN;
	elementName = eN;
}

Element::~Element(){
}

void Element::setAttributes(){
	std::cout << "Please input following data for " << elementName << ":" << std::endl;
	std::cout << "Atomic symbol: ";
	std::cin >> atomicSymbol;
	std::cout << "\nGroup number: ";
	std::cin >> groupNumber;
}

void Element::printAttributes(){
	std::cout << "Element name: " << elementName << std::endl;
	std::cout << "Atomic symbol: " << atomicSymbol << std::endl;
	std::cout << "Atomic number: " << atomicNumber << std::endl;
	std::cout << "Group number: " << groupNumber << std::endl;
	std::cout << "Period number: " << periodNumber << std::endl;
	std::cout << "Atomic weight: " << atomicWeight << std::endl;
}
