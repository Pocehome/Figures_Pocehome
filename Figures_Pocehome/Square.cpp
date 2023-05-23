#include "Square.hpp"
#include <iostream>

Square::Square(Point p, double w) {
	this->p = p;
	this->width = w;
	this->perimeter = 4 * w;
	this->square = w * w;
}

void Square::show() {
	this->p.show();
	std::cout << this->width << "x" << this->width << std::endl;
	std::cout << this->perimeter << std::endl;
	std::cout << this->square << std::endl;
}