/*
Cylinder.cpp provides the actual code for the class methods, 
the constructor, and get and set methods for the radius and heigh. It also includes
the methods for calulating the volume and surface area of the cylinder.
Implementation file (turns the design into working code) ------
*/

#include "myCylinder.h"
#include <cmath>

//this is the implementation file//

//my constructor//
myCylinder::myCylinder(double r, double h)
	: radius(r), height(h) {}

//get method for Radius//
double myCylinder::getRadius() const {
	return radius;

}
//set method for Radius//
void myCylinder::setRadius(double r) {
	double radius = r;
}

//get method for height//
double myCylinder::getHeight() const {
	return height;

}

//set method for height//
void myCylinder::setHeight(double h) {
	height = h;

}

//method to calculate the cylinder's volume//
double myCylinder::calculateVolume() const {
	return M_PI * radius * radius * height;

}

//method for calulating the Cylinder's surface area//
double myCylinder::calculateSurfaceArea() const {
	double baseArea = 2 * M_PI * radius * radius;
	double lateralArea = 2 * M_PI * radius * height;
	return baseArea + lateralArea;
};