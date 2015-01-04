#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for circle shapes
class Circle{
	double area, circumference;
	double radius;
public:
	string name;
	void setValues();
	void findArea();
	void findCircumference();
	void printValues();
}cir;
void Circle::setValues(){
	cout << "What is the radius?" << endl;
	cin >> radius;
	cout << "What would you like to name the circle?" << endl;
	cin >> name;
}
void Circle::findArea(){
	double radiusSquared;
	radiusSquared = pow(radius, 2);
	area = radiusSquared * pi;
}
void Circle::findCircumference(){
	double diameter;
	diameter = 2 * radius;
	circumference = diameter * pi;
}
void Circle::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Circumference is: " << circumference << "\n\n" << endl;
}

//function for circle creations
void createCircle(){
	cout << "Please enter values for circle: " << endl;

	cir.setValues();
	cir.findArea();
	cir.findCircumference();

	cout << "The values of " << cir.name << " are: " << endl;
	cir.printValues();
}