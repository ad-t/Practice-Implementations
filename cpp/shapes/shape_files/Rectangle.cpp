#include "Rectangle.hpp"

Rectangle::Rectangle() {
    this->_l = 1;
    this->_w = 1;
    this->setCoordinates(0, 0);
}

Rectangle::Rectangle(double l, double w) {
    this->_l = l;
    this->_w = w;
    this->setCoordinates(0, 0);
}

Rectangle::Rectangle(double l, double w, double x, double y) {
    this->_l = l;
    this->_w = w;
    this->setCoordinates(x, y);
}

std::string Rectangle::information() {
    return "Rectangle: l=" + std::to_string(this->_l) + " w=" + std::to_string(this->_w) + " x=" + std::to_string(this->getX()) + " y=" + std::to_string(this->getY()); 
}

Rectangle::~Rectangle() {}
