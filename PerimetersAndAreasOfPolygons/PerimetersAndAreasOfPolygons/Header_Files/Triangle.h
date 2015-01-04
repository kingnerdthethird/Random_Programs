#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for triangle shape
class Triangle{
	double base, height;
	double area, perimeter;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}tri;
void Triangle::setValues(){
	cout << "What is the base length?" << endl;
	cin >> base;
	cout << "What is the height?" << endl;
	cin >> height;
	cout << "What would you like to name the triangle?" << endl;
	cin >> name;
}
void Triangle::findArea(){
	area = (base * height) / 2;
}
void Triangle::findPerimeter(){
	double halfLength, side;
	halfLength = base / 2;
	side = hypot(halfLength, height);
	perimeter = (2 * side) + base;
}
void Triangle::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createTriangle(){
	cout << "Please enter values for triangle: " << endl;

	tri.setValues();
	tri.findArea();
	tri.findPerimeter();

	cout << "The values of " << tri.name << " are: " << endl;
	tri.printValues();
}