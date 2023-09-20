#ifndef Cylinder_h
#define Cylinder_h

using namespace std;

class Cylinder
{
public:
	//methods
	Cylinder();
	Cylinder(float radius, float height);

	float calculateVolume(float radius, float height);
	float calculateSA(float radius, float height);

	void setRadius(float radius);
	float getRadius() const;

	void setHeight(float height);
	float getHeight() const;



private:
	//attributes

	float radius;
	float height;

};



//Specifying calculations


#endif Cylinder.h

