#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for hendecagon shape
class Hendecagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}hend;
void Hendecagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the hendecagon?" << endl;
	cin >> name;
}
void Hendecagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 11);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 11;
}
void Hendecagon::findPerimeter(){
	perimeter = side * 11;
}
void Hendecagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createHendecagon(){
	cout << "Please enter values for hendecagon: " << endl;

	hend.setValues();
	hend.findArea();
	hend.findPerimeter();

	cout << "The values of " << hend.name << " are: " << endl;
	hend.printValues();
}