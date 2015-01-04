#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//class for dodecagon shape
class Dodecagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}dodec;
void Dodecagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the dodecagon?" << endl;
	cin >> name;
}
void Dodecagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 12);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 12;
}
void Dodecagon::findPerimeter(){
	perimeter = side * 12;
}
void Dodecagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

//function for creation of shape
void createDodecagon(){
	cout << "Please enter values for dodecagon: " << endl;

	dodec.setValues();
	dodec.findArea();
	dodec.findPerimeter();

	cout << "The values of " << dodec.name << " are: " << endl;
	dodec.printValues();
}