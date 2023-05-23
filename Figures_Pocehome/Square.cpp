#include "Square.hpp"
#include <iostream>

Square::Square(Point p, double width) {
	this->p = p;
	this->width = width;
	this->figure_perimeter = 4 * width;
	this->figure_area = width * width;
}

void Square::show() {
	this->p.show();
	std::cout << this->width << "x" << this->width << std::endl;
	std::cout << "Perimeter = " << this->figure_perimeter << std::endl;
	std::cout << "Area of a square = " << this->figure_area << std::endl;
}

void Square::show_type() {
	std::cout << "Square:" << std::endl;
}
