// OverComplicatedUtilityProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "BackboneFunctions.h"
#include "UmbrellaFunctions.h"
#include "Element.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Element H(1, "Hydrogen");
	H.setAttributes();
	Element * He = new Element(2, "Helium");
	He->setAttributes();
	system("pause");
	return 0;
}

