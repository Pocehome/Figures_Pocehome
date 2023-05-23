#include "Figure.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Image.hpp"
#include <iostream>

void ShowFigures(Figure* figures[], size_t arr_szie) {
	for (size_t i = 0; i < arr_szie; i++) {
		std::cout << "Figure " << i << ":" << std::endl;
		figures[i]->show();
		std::cout << std::endl;
	}
}

int main() {
	Point point(1, 3);
	/*std::cout << "Point:" << std::endl;
	point.show();
	std::cout << std::endl;*/

	Line line(Point(1, 4), Point(5, 1));
	/*std::cout << "Line:" << std::endl;
	line.show();
	std::cout << std::endl;*/

	Circle circle(point, 5);
	/*std::cout << "Circle:" << std::endl;
	circle.show();
	std::cout << std::endl;*/

	Triangle triangle(Point(0, 0), Point(0, 3), Point(4, 0));
	/*std::cout << "Triangle:" << std::endl;
	triangle.show();
	std::cout << std::endl;*/

	Rectangle rectangle(Point(), 3, 5.6);
	/*std::cout << "Rectangle:" << std::endl;
	rectangle.show();
	std::cout << std::endl;*/

	Square square(Point(-3.44, -10), 5);
	/*std::cout << "Square:" << std::endl;
	square.show();
	std::cout << std::endl;*/

	Image im;
	im.append(&point);
	im.append(&line);
	im.append(&circle);
	im.append(&triangle);
	im.append(&rectangle);
	im.append(&square);
	im.show();
}
