#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(Point p, double h, double w) {
	this->p = p;
	this->height = h;
	this->width = w;
	this->perimeter = 2 * (h + w);
	this->square = h * w;
}

void Rectangle::show() {
	this->p.show();
	std::cout << this->height << "x" << this->width << std::endl;
	std::cout << this->perimeter << std::endl;
	std::cout << this->square << std::endl;
}