#include "Point.hpp"
#include <iostream>

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
	this->perimeter = 0;
	this->square = 0;
}

void Point::show() {
	std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}