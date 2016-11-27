#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;

class Camera {
    public:
        Camera();
        ~Camera() = default;
        void moveForwards();
        void moveBackwards();
        void moveLeft();
        void moveRight();
        void moveUp();
        void moveDown();
        void rotateLeft(double deg);
        void rotateRight(double deg);
        void move(int vx, int vy, int vz);
        void moveTo(int cx, int cy, int cz);
        void refresh();
        double deg2rad(double deg);
    private:
        double _x;
        double _y;
        double _z;
        double _lookAt_x;
        double _lookAt_y;
        double _lookAt_z;
        double _rotationX;
        double _rotationY;
        double _rotationZ;
        double _rotationAngle;
};

#endif // CAMERA_H
