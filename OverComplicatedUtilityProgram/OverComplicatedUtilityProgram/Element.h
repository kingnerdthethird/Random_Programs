#pragma once
#include <sstream>

class Element{
	int atomicNumber, groupNumber, periodNumber;
	double atomicWeight;
	std::string atomicSymbol, elementName;
public:
	Element(int, std::string);
	~Element();
	void setAttributes();
	void printAttributes();
};

