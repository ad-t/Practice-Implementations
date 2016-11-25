#ifndef SHAPE_H
#define SHAPE_H

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

class Shape {
    public:
        Shape() = default;
        ~Shape() = default;
        virtual void draw() = 0;
};

#endif // SHAPE_H
