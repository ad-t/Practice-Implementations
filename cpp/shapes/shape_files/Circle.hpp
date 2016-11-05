#ifndef SHAPE_CIRCLE_H
#define SHAPE_CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape {
    public:
        Circle();
        Circle(double radius);
        Circle(double radius, double x, double y);
        virtual std::string information();
        ~Circle();
    private:
        double _radius;
};

#endif // SHAPE_CIRCLE_H
