#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for pentagon shape
class Pentagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}pent;
void Pentagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the pentagon?" << endl;
	cin >> name;
}
void Pentagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 5);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 5;
}
void Pentagon::findPerimeter(){
	perimeter = side * 5;
}
void Pentagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createPentagon(){
	cout << "Please enter values for pentagon: " << endl;
	pent.setValues();
	pent.findArea();
	pent.findPerimeter();

	cout << "The values of " << pent.name << " are: " << endl;
	pent.printValues();
}