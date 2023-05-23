#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Circle : public Figure {
private:
	Point p;
	double radius;

public:
	Circle(Point p, double radius);

	void show();
};
