#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(Point p, double height, double width) {
	this->p = p;
	this->height = height;
	this->width = width;
	this->figure_perimeter = 2 * (height + width);
	this->figure_area = height * width;
}

void Rectangle::show() {
	this->p.show();
	std::cout << this->height << "x" << this->width << std::endl;
	std::cout << "Perimeter = " << this->figure_perimeter << std::endl;
	std::cout << "Area of a rectangle = " << this->figure_area << std::endl;
}

void Rectangle::show_type() {
	std::cout << "Rectangle:" << std::endl;
}
