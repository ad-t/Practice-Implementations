#include <iostream>
#include <stdlib.h>

#include "ShapeStore.hpp"

using namespace std;

int main (int argc, char * argv[]) {
    ShapeStore *s = new ShapeStore();
    s->addCircle(4, 0, 0);
    s->addRectangle(2, 5, 5, 5);
    s->addTriangle(6, 0, 0);
    cout << *s << endl;
    return EXIT_SUCCESS;
}
