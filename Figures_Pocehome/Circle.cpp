#include "Circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


Circle::Circle(Point p, double radius) {
	this->p = p;
	this->radius = radius;
	this->perimeter = 2 * M_PI * radius;
	this->square = M_PI * radius * radius;
}

void Circle::show() {
	this->p.show();
	std::cout << this->radius << std::endl;
	std::cout << this->perimeter << std::endl;
	std::cout << this->square << std::endl;
}