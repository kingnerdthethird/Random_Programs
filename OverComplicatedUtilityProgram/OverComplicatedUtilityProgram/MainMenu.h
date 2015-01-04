#include <iostream>
#include <sstream>

//prototype functions
void DisplayMainMenu();
void RouteChoice(std::string choice);
//define functions
void DisplayMainMenu(){
	std::cout << "Welcome to the main menu." << std::endl;
	std::cout << "Please input number of submenu to go to" << std::endl;
	std::cout << "1. Utility\n";
	std::cout << "2. Math\n";
	std::cout << "3. Science\n";
	std::cout << "4. Project Euler\n";
	std::cout << "5. User Settings\n";
}