#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for rectangle shape
class Rectangle{
	double length, width;
	double perimeter, area;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}rect;
void Rectangle::setValues(){
	cout << "What is the length?" << endl;
	cin >> length;
	cout << "What is the width?" << endl;
	cin >> width;
	cout << "What would you like to name the rectangle?" << endl;
	cin >> name;
}
void Rectangle::findArea(){
	area = length * width;
}
void Rectangle::findPerimeter(){
	perimeter = 2 * (length + width);
}
void Rectangle::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createRectangle(){
	cout << "Please enter values for rectangle: " << endl;
	rect.setValues();
	rect.findArea();
	rect.findPerimeter();

	cout << "The values of " << rect.name << " are: " << endl;
	rect.printValues();
}