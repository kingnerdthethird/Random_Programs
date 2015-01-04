#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for hexagon shape
class Hexagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}hexa;
void Hexagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the hexagon?" << endl;
	cin >> name;
}
void Hexagon::findArea(){
	area = ((3 * sqrt(3)) / 2) * pow(side, 2);
}
void Hexagon::findPerimeter(){
	perimeter = side * 6;
}
void Hexagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createHexagon(){
	cout << "Please enter values for hexagon: " << endl;

	hexa.setValues();
	hexa.findArea();
	hexa.findPerimeter();

	cout << "The values of " << hexa.name << " are: " << endl;
	hexa.printValues();
}