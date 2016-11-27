#ifndef SHAPE_H
#define SHAPE_H

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        void setX(double x);
        void setY(double y);
        void setZ(double z);
        void setRotation(double theta);
        double getX();
        double getY();
        double getZ();
        double getRotation();
        void setSolid(bool state);
        bool getSolid();
        void positionInWorld();
        virtual void draw() = 0;
    private:
        double _x, _y, _z, _rotation;
        bool _solid;
};

#endif // SHAPE_H
