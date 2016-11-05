#include "Triangle.hpp"

Triangle::Triangle() {
    this->_size = 0;
    this->setCoordinates(0, 0);
}

Triangle::Triangle(double size) {
    this->_size = size;
    this->setCoordinates(0, 0);
}

Triangle::Triangle(double size, double x, double y) {
    this->_size = size;
    this->setCoordinates(x, y);
}

std::string Triangle::information() {
    return "Triangle: s=" + std::to_string(this->_size) + " x=" + std::to_string(this->getX()) + " y=" + std::to_string(this->getY());
}

Triangle::~Triangle() {}
