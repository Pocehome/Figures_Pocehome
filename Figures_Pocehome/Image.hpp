#pragma once
#include <vector>
#include "Figure.hpp"
#include <iostream>

class Image {
private:
    std::vector<Figure*> figures;

public:
    void append(Figure* const figure);

    Figure* operator[](size_t index);

    void show();
};
