#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for octagon shape
class Octagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}octa;
void Octagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the octagon?" << endl;
	cin >> name;
}
void Octagon::findArea(){
	area = pow(side, 2) * (2 + 2 * (sqrt(2)));
}
void Octagon::findPerimeter(){
	perimeter = side * 8;
}
void Octagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createOctagon(){
	cout << "Please enter values for octagon: " << endl;

	octa.setValues();
	octa.findArea();
	octa.findPerimeter();

	cout << "The values of " << octa.name << " are: " << endl;
	octa.printValues();
}