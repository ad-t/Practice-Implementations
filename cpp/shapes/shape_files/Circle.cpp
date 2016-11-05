#include "Circle.hpp"

Circle::Circle() {
    this->_radius = 1;
    this->setCoordinates(0, 0);
}

Circle::Circle(double radius) {
    this->_radius = radius;
    this->setCoordinates(0, 0);
}

Circle::Circle(double radius, double x, double y) {
    this->_radius = radius;
    this->setCoordinates(x, y);
}

std::string Circle::information() {
    return "Circle: r=" + std::to_string(this->_radius) + " x=" + std::to_string(this->getX()) + " y=" + std::to_string(this->getY());
}

Circle::~Circle() {}
