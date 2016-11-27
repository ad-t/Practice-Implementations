#include <iostream>
#include <vector>
#include "Shape.hpp"
#include "Cube.hpp"

using namespace std;

class Map : public Shape {
    public:
        Map() = default;
        Map(int size);
        ~Map();
        virtual void draw();
    private:
        int _size;
        vector<Cube *> _drawList;
};
