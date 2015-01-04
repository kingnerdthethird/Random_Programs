#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for heptagon shape
class Heptagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}hept;
void Heptagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the heptagon?" << endl;
	cin >> name;
}
void Heptagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 7);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 7;
}
void Heptagon::findPerimeter(){
	perimeter = side * 7;
}
void Heptagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createHepatagon(){
	cout << "Please enter values for heptagon: " << endl;

	hept.setValues();
	hept.findArea();
	hept.findPerimeter();

	cout << "The values of " << hept.name << " are: " << endl;
	hept.printValues();
}