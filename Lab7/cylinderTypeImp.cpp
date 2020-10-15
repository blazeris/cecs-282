#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::print() const {
	circleType::print();
	cout << "Cylinder height: " << height << endl;
	cout << "Cylinder surface area: " << getSurfaceArea() << endl;
	cout << "Cylinder volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h){
	height = h;
}

void cylinderType::setBaseCenter(double x, double y) {
	pointType::setPoint(x, y);
}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h){
	setBaseCenter(x, y);
	circleType::setRadius(r);
	height = h;
}

double cylinderType::getHeight() const {
	return height;
}

double cylinderType::getVolume() const {
	return (circleType::getArea() * height);
}

double cylinderType::getSurfaceArea() const {
	return (2 * circleType::getArea() + 2 * 3.1416 * circleType::getRadius() * height);
}

cylinderType::cylinderType(double x, double y, double r, double h):circleType(x, y, r){
	height = h;
}


