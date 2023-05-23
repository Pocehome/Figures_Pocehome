#pragma once
#include "Figure.hpp"
#include "Point.hpp"

class Line : public Figure {
private:
	Point p1;
	Point p2;

public:
	Line(Point p1, Point p2);

	void show();
	void show_type();
};
