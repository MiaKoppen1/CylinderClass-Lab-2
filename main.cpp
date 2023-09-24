/*main file includes the main() function, which is the starting
point for the execuation of the program. Here, we set 
the radius and height properties (5.0 and 10.0) and call the methods */
#include "myCylinder.h"
//now other parts of my program can use it//
#include <iostream>
/* header file library that allows me to
work with input and output objects*/

int main()
{
	//created the cylinder object//
	myCylinder cylinder(5.0, 10.0);
	//this will display the results//
	std::cout << "radius: " << cylinder.getRadius() << std::endl;
	std::cout << "height: " << cylinder.getHeight() << std::endl;
	std::cout << "volume: " << cylinder.calculateVolume() << std::endl;
	std::cout << "surface area: " << cylinder.calculateSurfaceArea() << std::endl;

	return 0;
}