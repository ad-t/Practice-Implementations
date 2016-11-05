#include "ShapeStore.hpp"

ShapeStore::ShapeStore() {
    this->_shapes = std::vector<Shape *>();
}

void ShapeStore::addCircle(double radius, double x, double y) {
    Circle *c = new Circle(radius, x, y);
    this->_shapes.push_back(c);
}

void ShapeStore::addRectangle(double l, double w, double x, double y) {
    Rectangle *r = new Rectangle(l, w, x, y);
    this->_shapes.push_back(r);
}

void ShapeStore::addTriangle(double size, double x, double y) {
    Triangle *t = new Triangle(size, x, y);
    this->_shapes.push_back(t);
}

ShapeStore::~ShapeStore() {}
