#ifndef SHAPE_RECTANGLE_H
#define SHAPE_RECTANGLE_H

#include "Shape.hpp"

class Rectangle : public Shape {
    public:
        Rectangle();
        Rectangle(double l, double w);
        Rectangle(double l, double w, double x, double y);
        virtual std::string information();
        ~Rectangle();
    private:
        double _l, _w;
};

#endif // SHAPE_RECTANGLE_H
