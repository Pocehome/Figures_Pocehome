#pragma once
class Figure {
protected:
	double figure_perimeter;
	double figure_area;
public:
	virtual void show() {};
	virtual void show_type() {};
};
