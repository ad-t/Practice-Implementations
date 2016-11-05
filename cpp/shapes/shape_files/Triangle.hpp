#ifndef SHAPE_TRIANGLE_H
#define SHAPE_TRIANGLE_H

#include "Shape.hpp"

class Triangle : public Shape {
    public:
        Triangle();
        Triangle(double size);
        Triangle(double size, double x, double y);
        virtual std::string information();
        ~Triangle();
    private:
        double _size;
};

#endif // SHAPE_CIRCLE_H
