#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
    public: 
        Shape();
        ~Shape();
        void setCoordinates(double x, double y);
        virtual std::string information() = 0;
        double getX();
        double getY();
    private:
        double _x, _y;
        std::string type;
};

#endif // SHAPE_H
