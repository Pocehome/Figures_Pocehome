#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Square : public Figure {
private:
	Point p;
	double width;

public:
	Square(Point p, double w);

	void show();
};
