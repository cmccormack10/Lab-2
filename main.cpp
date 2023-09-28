#include <iostream>
#include "Cylinder.h"
#include <iomanip>

using namespace std;

int main()
{
	float radius, height;

	//get radius and height
	cout << "What is the radius of the Cylinder: ";
	cin >> radius;

	cout << "What is the height of the Cylinder: ";
	cin >> height;

	//create the cylinder
	Cylinder myCylinder;
	myCylinder.setRadius(radius);
	myCylinder.setHeight(height);
	
	//output the measurements
	cout << "The volume of the cylinder is: " << setprecision(6) << myCylinder.calculateVolume(radius, height) << endl;
	cout << "The surface area of the cylinder is: " << setprecision(6) << myCylinder.calculateSA(radius, height) << endl;

	return 0;
}
