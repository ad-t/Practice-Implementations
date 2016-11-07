#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

typedef struct rect {
    double l, w;
} Rectangle;

typedef struct circ {
    double r;
} Circle;

typedef struct trap {
    double lower, upper, offset, height;
} Trapezium;

typedef struct tria {
    double base, height, theta;
} Triangle;

struct Shape {
    union {
        Rectangle   rec;
        Triangle    tri;
        Circle      cir;
        Trapezium   tra;
    } u;
    double x, y, rotation;
    ShapeTypes type;
    friend ostream& operator<<(ostream& os, Shape s) {
        switch (s.type) {
            case ShapeTypes::RECTANGLE:
                os <<   "Rectangle: l=" << s.u.rec.l << 
                        " w=" << s.u.rec.w;
                break;
            case ShapeTypes::TRIANGLE:
                os <<   "Triangle: base=" << s.u.tri.base << 
                        " height=" << s.u.tri.height << 
                        " theta=" << s.u.tri.theta;
                break;
            case ShapeTypes::TRAPEZIUM:
                os <<   "Trapezium: lower=" << s.u.tra.lower << 
                        " upper=" << s.u.tra.upper <<
                        " offset=" << s.u.tra.offset <<
                        " height=" << s.u.tra.height;
                break;
            case ShapeTypes::CIRCLE:
                os << "Circle: r" << s.u.cir.r;
                break;
            default:
                os << "Unknown type!";
        }
        os << " x=" << s.x << " y=" << s.y;
        return os;
    }
    Shape() = default;
    Shape(const Shape& oldshape) = default;
};

#endif // SHAPE_H
