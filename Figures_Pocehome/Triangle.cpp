#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(Point p1, Point p2, Point p3) {
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
	this->figure_perimeter = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)) + sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2)) + 
		sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
	this->figure_area = abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y))) / 2;
}

void Triangle::show() {
	this->p1.show();
	this->p2.show();
	this->p3.show();
	std::cout << "Perimeter = " << this->figure_perimeter << std::endl;
	std::cout << "Area of a triangle = " << this->figure_area << std::endl;
}

void Triangle::show_type() {
	std::cout << "Triangle:" << std::endl;
}
