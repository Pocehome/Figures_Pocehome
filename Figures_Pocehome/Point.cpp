#include "Point.hpp"
#include <iostream>

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
	this->figure_perimeter = 0;
	this->figure_area = 0;
}

void Point::show() {
	std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

void Point::show_type() {
	std::cout << "Point:" << std::endl;
}
