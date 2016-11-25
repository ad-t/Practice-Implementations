#ifndef CUBE_H
#define CUBE_H

#include "Shape.hpp"

class Cube : public Shape {
    public:
        Cube();
        Cube(double w, double h, double l);
        virtual void draw();
        ~Cube();
    private:
        double _width;
        double _height;
        double _length;
};

#endif // CUBE_H
