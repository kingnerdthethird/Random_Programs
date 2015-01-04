#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for n-gon shapes
class Ngon{
	double area, perimeter;
	double side;
	int numberSides;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}ngon;
void Ngon::setValues(){
	cout << "How many sides are there in your polygon?" << endl;
	cin >> numberSides;
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the n-gon?" << endl;
	cin >> name;
}
void Ngon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / numberSides);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * numberSides;
}
void Ngon::findPerimeter(){
	perimeter = side * numberSides;
}
void Ngon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shapes
void createNgon(){
	cout << "Please enter values for n-gon: " << endl;

	ngon.setValues();
	ngon.findArea();
	ngon.findPerimeter();

	cout << "The values of " << ngon.name << " are: " << endl;
	ngon.printValues();
}