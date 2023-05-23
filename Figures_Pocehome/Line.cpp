#include "Line.hpp"
#include <cmath>
#include <iostream>

Line::Line(Point p1, Point p2) {
	this->p1 = p1;
	this->p2 = p2;
	this->perimeter = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	this->square = 0;
}

void Line::show() {
	this->p1.show();
	this->p2.show();
	std::cout << this->perimeter << std::endl;
}