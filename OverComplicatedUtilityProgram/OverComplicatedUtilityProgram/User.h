#pragma once
#include <sstream>
class User{
	
public:
	std::string firstName, lastName, favoriteColor;
	int age;
	double height, weight;
	User(std::string, std::string);
	~User();
	void AskForAge();
	void AskForHeight();
	void AskForWeight();
	void AskForFavoriteColor();
};

