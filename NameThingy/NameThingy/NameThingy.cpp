// NameThingy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
int _tmain(int argc, _TCHAR* argv[])
{ 
	std::string name;
	bool choice = true;
	int choiceNumber = 1;
	while (choice == true){
		std::cout << "Please input name: ";
		std::cin >> name;
		if (name == "Isaac" || name == "isaac"){
			std::cout << "Blegh" << std::endl;
		}
		else{
			std::cout << name << ":" << std::endl;
			std::cout << "10/10" << std::endl;
			std::cout << "5 stars" << std::endl;
		}
		std::cout << "Countine?" << std::endl;
		std::cout << "1. Yes 2. No" << "\n> ";
		std::cin >> choiceNumber;
		if (choiceNumber == 2){
			choice == false;
		}
	}
	system("pause");
	return 0;
}

