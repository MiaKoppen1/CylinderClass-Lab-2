#ifndef myCYLINDER_H
#define myCYLINDER_H

/*
We define the myCylinder class in this header file.
specifies the attributes and the methods that will be used with the cylinder object.
*/

#define _USE_MATH_DEFINES
//to use PI//
#include <cmath>

class myCylinder
	//created a class named myCylinder//
{
private:
	double radius;
	double height;

public:
	//my constructor//

	myCylinder(double r, double h);

	//get method and set methods for the cylinder's radius//
	double getRadius() const;
	void setRadius(double r);

	//get method and set methods for the cylinder's height//

	double getHeight() const;
	void setHeight(double h);

	//method for calculating the cylinder's volume//
	double calculateVolume() const;
	//method for calulating the surface of the cylinder//
	double calculateSurfaceArea() const;

	/*
	getter and setter methods are used to acess and modify the priavte attributes
	of the class.
	*/
};
#endif //MYCLINDER_H
