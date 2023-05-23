#include "Figure.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Image.hpp"
#include <iostream>

int main() {
	Point point(1, 3);
	Line line(Point(1, 4), Point(5, 1));
	Circle circle(point, 5);
	Triangle triangle(Point(0, 0), Point(0, 3), Point(4, 0));
	Rectangle rectangle(Point(), 3, 5.6);
	Square square(Point(-3.44, -10), 5);

	Image im;
	im.append(&point);
	im.append(&line);
	im.append(&circle);
	im.append(&triangle);
	im.append(&rectangle);
	im.append(&square);
	im.show();
}
