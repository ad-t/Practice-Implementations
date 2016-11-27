#include "Camera.hpp"

using namespace std;

Camera::Camera() {
    this->_x = 0;
    this->_y = 0;
    this->_z = 0;
    this->_lookAt_x = 0;
    this->_lookAt_y = 0;
    this->_lookAt_z = 0; 
    this->_rotationX = 0;
    this->_rotationY = 1;
    this->_rotationZ = 0;
}

void Camera::refresh() {
    cout << "CAMERA:";
    cout << " x=" << this->_x;
    cout << " y=" << this->_y;
    cout << " z=" << this->_z;
    cout << " lx=" << this->_lookAt_x;
    cout << " ly=" << this->_lookAt_y;
    cout << " lz=" << this->_lookAt_z;
    cout << " rot=" << this->_rotationAngle << endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(this->_x, this->_y, this->_z, 
                this->_lookAt_x + cos(this->_rotationAngle), this->_lookAt_y, this->_lookAt_z + sin(this->_rotationAngle),
                this->_rotationX, this->_rotationY, this->_rotationZ);
}

void Camera::move(double vx, double vy, double vz) {
    this->_x += vx;
    this->_y += vy;
    this->_z += vz;
    this->_lookAt_x += vx;
    this->_lookAt_y += vy;
    this->_lookAt_z += vz; 
}

void Camera::moveTo(double cx, double cy, double cz) {
    this->_x = cx;
    this->_y = cy;
    this->_z = cz;
    this->_lookAt_x = cx;
    this->_lookAt_y = cy;
    this->_lookAt_z = cz; 
}

void Camera::moveForwards() {
    this->move(cos(this->_rotationAngle), 0, sin(this->_rotationAngle));
}

void Camera::moveBackwards() {
    this->move(-cos(this->_rotationAngle), 0, -sin(this->_rotationAngle));
}

void Camera::moveLeft() {
    this->move(cos(this->_rotationAngle - M_PI/2), 0, sin(this->_rotationAngle - M_PI/2));
}

void Camera::moveRight() {
    this->move(cos(this->_rotationAngle + M_PI/2), 0, sin(this->_rotationAngle + M_PI/2));
}

void Camera::moveUp() {
    this->move(0, 1, 0);
}

void Camera::moveDown() {
    this->move(0, -1, 0);
}

void Camera::rotateLeft(double deg) {
    this->_rotationAngle -= deg2rad(deg);
}

void Camera::rotateRight(double deg) {
    this->_rotationAngle += deg2rad(deg);
}

double Camera::deg2rad(double deg) {
    return deg * (M_PI/180);
}
