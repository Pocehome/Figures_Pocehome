#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Square : public Figure {
private:
	Point p;
	double width;

public:
	Square(Point p, double width);

	void show();
	void show_type();
};
