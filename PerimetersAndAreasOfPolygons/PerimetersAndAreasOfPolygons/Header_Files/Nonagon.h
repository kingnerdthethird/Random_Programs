#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for nonagon shape
class Nonagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}non;
void Nonagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the nonagon?" << endl;
	cin >> name;
}
void Nonagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 9);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 9;
}
void Nonagon::findPerimeter(){
	perimeter = side * 9;
}
void Nonagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createNonagon(){
	cout << "Please enter values for nonagon: " << endl;

	non.setValues();
	non.findArea();
	non.findPerimeter();

	cout << "The values of " << non.name << " are: " << endl;
	non.printValues();
}