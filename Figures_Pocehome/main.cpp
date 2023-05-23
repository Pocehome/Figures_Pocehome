#include "Figure.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <iostream>

void ShowFigures(Figure* figures[], size_t arr_szie) {
	for (size_t i = 0; i < arr_szie; i++) {
		std::cout << "Figure " << i << ":" << std::endl;
		figures[i]->show();
		std::cout << std::endl;
	}
}

int main() {
	Point p1(1, 3);
	std::cout << "Point:" << std::endl;
	p1.show();
	std::cout << std::endl;

	Line l(Point(1, 4), Point(5, 1));
	std::cout << "Line:" << std::endl;
	l.show();
	std::cout << std::endl;

	Circle c(p1, 5);
	std::cout << "Circle:" << std::endl;
	c.show();
	std::cout << std::endl;

	Triangle t(Point(0, 0), Point(0, 3), Point(4, 0));
	std::cout << "Triangle:" << std::endl;
	t.show();
	std::cout << std::endl;

	Rectangle r(Point(), 3, 5.6);
	std::cout << "Rectangle:" << std::endl;
	r.show();
	std::cout << std::endl;

	Square s(Point(-3.44, -10), 5);
	std::cout << "Square:" << std::endl;
	s.show();
	std::cout << std::endl;

	//Figure* figures[6] = { &p1, &l, &t, &r, &s, &c };

	//ShowFigures(figures, sizeof(figures) / sizeof(Figure*));
}