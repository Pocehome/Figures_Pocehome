#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Triangle : public Figure {
private:
	Point p1, p2, p3;
public:
	Triangle(Point p1, Point p2, Point p3);

	void show();
	void show_type();
};
