#include "Shape.hpp"

Shape::Shape() {}

void Shape::setCoordinates(double x, double y) {
    this->_x = x;
    this->_y = y;
}

double Shape::getX() {
    return this->_x;
}

double Shape::getY() {
    return this->_y;
}

Shape::~Shape() {}
