#include "Image.hpp"

void Image::append(Figure* const figure) {
    this->figures.push_back(figure);
}

Figure* Image::operator[](size_t index) {
    return figures[index];
}

void Image::show() {
    for (size_t i = 0; i < this->figures.size(); i++) {
        this->figures[i]->show_type();
        this->figures[i]->show();
        std::cout << std::endl;
    }
}
