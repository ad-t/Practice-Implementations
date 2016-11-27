#include "Shape.hpp"

void Shape::setX(double x) { this->_x = x; }
void Shape::setY(double y) { this->_y = y; }
void Shape::setZ(double z) { this->_z = z; }
double Shape::getX() { return this->_x; }
double Shape::getY() { return this->_y; }
double Shape::getZ() { return this->_z; }
void Shape::setRotation(double theta) { this->_rotation = theta; }
double Shape::getRotation() { return this->_rotation; }

void Shape::positionInWorld() {
    glTranslatef(this->_x, this->_y, this->_z);
}

bool Shape::getSolid() { return this->_solid; }
void Shape::setSolid(bool state) { this->_solid = state; }
