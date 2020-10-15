//Implementation file circleTypeImp.cpp

#include <iostream>
#include "circleType.h"

using namespace std;

void circleType::print() const {
	cout << "Center: ";
	pointType::print();
	cout << endl;
	
	cout << "Radius: " << radius << endl;
	cout << "Circumference: " << getCircumference() << endl;
	cout << "Area: " << getArea() << endl;
}

void circleType::setRadius(double r) {
	radius = r;
}

double circleType::getRadius() const {
	return radius;
}

double circleType::getCircumference() const {
	return (2 * 3.1416 * radius);
}

double circleType::getArea() const {
	return (3.1416 * radius * radius);
}

circleType::circleType(double x, double y, double r)
:pointType(x,y) {
	radius = r;
}
