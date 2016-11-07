#include <iostream>
#include <stdlib.h>

#include "enums.hpp"
#include "Shape.hpp"

using namespace std;

int main (int argc, char * argv[]) {
    Shape s;
    s.type = ShapeTypes::RECTANGLE;
    s.u.rec.l = 30;
    s.u.rec.w = 50;
    s.x = 1.5;
    s.y = 6.7;
    cout << s << endl; 
    
    Shape r;
    r.type = ShapeTypes::TRIANGLE;
    r.u.tri.base = 5;
    r.u.tri.height = 9;
    r.u.tri.theta = 40;
    r.x = -2;
    r.y = -8;
    cout << r << endl;

    Shape t = s;
    s.x = 9999;
    cout << t << endl;
    return EXIT_SUCCESS;
}
