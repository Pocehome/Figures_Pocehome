#include "Circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


Circle::Circle(Point p, double radius) {
	this->p = p;
	this->radius = radius;
	this->figure_perimeter = 2 * M_PI * radius;
	this->figure_area = M_PI * radius * radius;
}

void Circle::show() {
	this->p.show();
	std::cout << "Radius = " << this->radius << std::endl;
	std::cout << "Perimeter = " << this->figure_perimeter << std::endl;
	std::cout << "Area of a circle = " << this->figure_area << std::endl;
}

void Circle::show_type() {
	std::cout << "Circle:" << std::endl;
}
