#include "Cylinder.h"

Cylinder::Cylinder() {
	float radius = 0;
	float height = 0;
}

Cylinder::Cylinder(float radius_, float height_)
{
	radius = radius_;
	height = height_;
}

void Cylinder::setRadius(float radius) {
	radius = radius;
}

float Cylinder::getRadius() const {
	return radius;
}

void Cylinder::setHeight(float height) {
	height = height;
}

float Cylinder::getHeight() const {
	return height;
}

float Cylinder::calculateVolume(float radius, float height) 
{
	return float(3.14159 * radius * radius * height);

}

float Cylinder::calculateSA(float radius, float height) 
{
	return float((2 * 3.14159 * (radius * radius)) + (2 * 3.14159 * radius * height));
}
