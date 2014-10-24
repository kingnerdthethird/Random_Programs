#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>
#define pi 3.141592654 //used to define the number pi
using namespace std;

//classes for all shapes are below
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

class Hexagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}hexa;
void Hexagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the hexagon?" << endl;
	cin >> name;
}
void Hexagon::findArea(){
	area = ((3 * sqrt(3)) / 2) * pow(side, 2);
}
void Hexagon::findPerimeter(){
	perimeter = side * 6;
}
void Hexagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

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

class Nonagon{
	double area, perimeter;
	double side;
public:
	string name;
	void setValues();
	void findArea();
	void findPerimeter();
	void printValues();
}non;
void Nonagon::setValues(){
	cout << "What is the side length?" << endl;
	cin >> side;
	cout << "What would you like to name the nonagon?" << endl;
	cin >> name;
}
void Nonagon::findArea(){
	double apothem, halfSide, triArea, intAngle, tangent;
	halfSide = side / 2;
	intAngle = 90 - (180 / 9);
	tangent = tan(intAngle * pi / 180);
	apothem = halfSide * tangent;
	triArea = (side * apothem) / 2;
	area = triArea * 9;
}
void Nonagon::findPerimeter(){
	perimeter = side * 9;
}
void Nonagon::printValues(){
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << "\n\n" << endl;
}

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

//prototypes of functions are below
void createCircle(); //creates circle shape
void createNgon(); //creates n-gon shape
void createTriangle(); //creates triangle shape
void createRectangle(); //creates rectangle shape
void createPentagon(); //creates pentagon shape
void createHexagon(); //creates hexagon shape
void createHepatagon(); //creates heptagon shape
void createOctagon(); //creates octagon shape
void createNonagon(); //creates nonagon shape
void createDecagon(); //creates decagon shape
void createHendecagon(); //creates hendecagon shape
void createDodecagon(); //creates dodecagon shape
void chooseShape(); //function to let user choose shape to create
void chooseToContinue(); //function to let user choose whether to continue or not when program is done

int _tmain(int argc, _TCHAR* argv[])
{
	chooseShape();

	system("pause");
	return 0;
}

//functions definitions are below
void createCircle(){
	cout << "Please enter values for circle: " << endl;

	cir.setValues();
	cir.findArea();
	cir.findCircumference();

	cout << "The values of " << cir.name << " are: " << endl;
	cir.printValues();
}

void createNgon(){
	cout << "Please enter values for n-gon: " << endl;

	ngon.setValues();
	ngon.findArea();
	ngon.findPerimeter();

	cout << "The values of " << ngon.name << " are: " << endl;
	ngon.printValues();
}

void createTriangle(){
	cout << "Please enter values for triangle: " << endl;

	tri.setValues();
	tri.findArea();
	tri.findPerimeter();

	cout << "The values of " << tri.name << " are: " << endl;
	tri.printValues();
}

void createRectangle(){
	cout << "Please enter values for rectangle: " << endl;
	rect.setValues();
	rect.findArea();
	rect.findPerimeter();

	cout << "The values of " << rect.name << " are: " << endl;
	rect.printValues();
}

void createPentagon(){
	cout << "Please enter values for pentagon: " << endl;
	pent.setValues();
	pent.findArea();
	pent.findPerimeter();

	cout << "The values of " << pent.name << " are: " << endl;
	pent.printValues();
}

void createHexagon(){
	cout << "Please enter values for hexagon: " << endl;

	hexa.setValues();
	hexa.findArea();
	hexa.findPerimeter();

	cout << "The values of " << hexa.name << " are: " << endl;
	hexa.printValues();
}

void createHepatagon(){
	cout << "Please enter values for heptagon: " << endl;

	hept.setValues();
	hept.findArea();
	hept.findPerimeter();

	cout << "The values of " << hept.name << " are: " << endl;
	hept.printValues();
}

void createOctagon(){
	cout << "Please enter values for octagon: " << endl;

	octa.setValues();
	octa.findArea();
	octa.findPerimeter();

	cout << "The values of " << octa.name << " are: " << endl;
	octa.printValues();
}

void createNonagon(){
	cout << "Please enter values for nonagon: " << endl;

	non.setValues();
	non.findArea();
	non.findPerimeter();

	cout << "The values of " << non.name << " are: " << endl;
	non.printValues();
}

void createDecagon(){
	cout << "Please enter values for decagon: " << endl;

	deca.setValues();
	deca.findArea();
	deca.findPerimeter();

	cout << "The values of " << deca.name << " are: " << endl;
	deca.printValues();
}

void createHendecagon(){
	cout << "Please enter values for hendecagon: " << endl;

	hend.setValues();
	hend.findArea();
	hend.findPerimeter();

	cout << "The values of " << hend.name << " are: " << endl;
	hend.printValues();
}

void createDodecagon(){
	cout << "Please enter values for dodecagon: " << endl;

	dodec.setValues();
	dodec.findArea();
	dodec.findPerimeter();

	cout << "The values of " << dodec.name << " are: " << endl;
	dodec.printValues();
}

void chooseShape(){
	int choice;

	cout << "Please choose a shape to create." << endl;
	cout << "1. Circle" << endl;
	cout << "2. N-gon" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Rectangle" << endl;
	cout << "5. Pentagon" << endl;
	cout << "6. Hexagon" << endl;
	cout << "7. Heptagon" << endl;
	cout << "8. Octagon" << endl;
	cout << "9. Nonagon" << endl;
	cout << "10. Decagon" << endl;
	cout << "11. Hendecagon" << endl;
	cout << "12. Dodecagon" << endl;
	cin >> choice;

	if (choice == 1){
		createCircle();
	}
	else if (choice == 2){
		createNgon();
	}
	else if (choice == 3){
		createTriangle();
	}
	else if (choice == 4){
		createRectangle();
	}
	else if (choice == 5){
		createPentagon();
	}
	else if (choice == 6){
		createHexagon();
	}
	else if (choice == 7){
		createHepatagon();
	}
	else if (choice == 8){
		createOctagon();
	}
	else if (choice == 9){
		createNonagon();
	}
	else if (choice == 10){
		createDecagon();
	}
	else if (choice == 11){
		createHendecagon();
	}
	else if (choice == 12){
		createDodecagon();
	}

	else{
		cout << "Please choose another number..." << endl;
		chooseShape();
	}
	chooseToContinue();
}

void chooseToContinue(){
	int answer;
	cout << "Would you like to continue?" << endl;
	cout << "1. Yes \n2. No" << endl;
	cin >> answer;
	if (answer == 1){
		chooseShape();
	}
	else if (answer == 2){
		cout << "Goodbye" << endl;
	}
	else{
		cout << "Please select yes or no." << endl;
		chooseToContinue();
	}
}