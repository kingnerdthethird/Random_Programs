#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for decagon shape
class Decagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}deca;
void Decagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the decagon?" << endl;
	cin >> name;
}
void Decagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 10);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 10;
}
void Decagon::findPerimeter(){
	perimeter = side * 10;
}
void Decagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createDecagon(){
	cout << "Please enter values for decagon: " << endl;

	deca.setValues();
	deca.findArea();
	deca.findPerimeter();

	cout << "The values of " << deca.name << " are: " << endl;
	deca.printValues();
}