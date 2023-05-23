#pragma once
#include "Figure.hpp"

class Point : public Figure {
public:
	double x, y;
	Point(double x, double y);
	Point() : Point(0, 0) {}

	void show();
	void show_type();
};
