#include "Map.hpp"

Map::Map(int _size) {
    this->_drawList = vector<Cube *>();
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            // must be done in quadrants as the generation begins in the middle
            Cube *topleft = new Cube(1, 1, 1);
            topleft->setX(i); topleft->setZ(j);
            Cube *topright = new Cube(1, 1, 1);
            topright->setX(-i); topright->setZ(j);
            Cube *bottomleft = new Cube(1, 1, 1);
            bottomleft->setX(-i); bottomleft->setZ(-j);
            Cube *bottomright = new Cube(1, 1, 1);
            bottomright->setX(i); bottomright->setZ(-j);
            _drawList.push_back(topleft);
            _drawList.push_back(topright);
            _drawList.push_back(bottomright);
            _drawList.push_back(bottomleft);
        }
    }
}

void Map::draw() {
    for (Cube *c : this->_drawList) {
        glPushMatrix();
            c->positionInWorld();
            c->draw();
        glPopMatrix();
    }
}
