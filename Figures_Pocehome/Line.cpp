#include "Line.hpp"
#include <cmath>
#include <iostream>

Line::Line(Point p1, Point p2) {
	this->p1 = p1;
	this->p2 = p2;
	this->figure_perimeter = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
	this->figure_area = 0;
}

void Line::show() {
	this->p1.show();
	this->p2.show();
	std::cout << "Length = " << this->figure_perimeter << std::endl;
}

void Line::show_type() {
	std::cout << "Line:" << std::endl;
}
