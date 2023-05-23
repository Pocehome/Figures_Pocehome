#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Rectangle : public Figure {
private:
	Point p;
	double height;
	double width;

public:
	Rectangle(Point p, double h, double w);

	void show();
};
