#include <iostream>
#include <sstream>
using namespace std;

//global variables

//prototype functions
int ConvertString(string number);
void ClearScreen();

//define functions
int ConvertString(string number){
	int counter = 1;
	int length = number.length();
	for (int c = 0; c <= length - 1; c++)
	{
		counter *= number[c] - '0';
	}
	return counter; 
}

void ClearScreen(){
	system("cls");
}