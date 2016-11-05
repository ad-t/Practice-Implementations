#ifndef SHAPE_STORE_H
#define SHAPE_STORE_H

#include <iostream>
#include <vector>

#include "shape_files/Shape.hpp"
#include "shape_files/Circle.hpp"
#include "shape_files/Triangle.hpp"
#include "shape_files/Rectangle.hpp"

class ShapeStore {
    public: 
        ShapeStore();
        ~ShapeStore();
        void addCircle(double radius, double x, double y);
        void addRectangle(double l, double w, double x, double y);
        void addTriangle(double size, double x, double y);
        friend std::ostream& operator<<(std::ostream& os, ShapeStore s) {
            for (Shape *sh : s._shapes) {
                os << sh->information() << " | ";
            }
            return os;
        }
    private:
        std::vector<Shape *> _shapes;
};

#endif // SHAPE_STORE_H
