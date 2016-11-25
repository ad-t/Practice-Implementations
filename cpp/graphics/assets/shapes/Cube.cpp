#include "Cube.hpp"

Cube::Cube() {
    this->_width = 1.0;
    this->_height = 1.0;
    this->_length = 1.0;
}

Cube::Cube(double w, double h, double l) {
    this->_width = w;
    this->_height = h;
    this->_length = l;
}

void Cube::draw() {
    glPushMatrix();
        glBegin(GL_QUADS);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(this->_width/2, this->_height/2, this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, this->_height/2, -1 * this->_length/2);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(this->_width/2, this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(-1 * this->_width/2, this->_height/2, -1 * this->_length/2);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(-1 * this->_width/2, this->_height/2, -1 * this->_length/2);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, this->_length/2);
            glVertex3f(-1 * this->_width/2, this->_height/2, this->_length/2);

            glColor3f(1.0, 1.0, 1.0);
            glVertex3f(-1 * this->_width/2, this->_height/2, this->_length/2);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, this->_length/2);
            glVertex3f(this->_width/2, this->_height/2, this->_length/2);

            glColor3f(0.0, 1.0, 1.0);
            glVertex3f(-1 * this->_width/2, this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, this->_height/2, this->_length/2);
            glVertex3f(-1 * this->_width/2, this->_height/2, this->_length/2);

            glColor3f(1.0, 1.0, 0.0);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, -1 * this->_length/2);
            glVertex3f(this->_width/2, -1 * this->_height/2, this->_length/2);
            glVertex3f(-1 * this->_width/2, -1 * this->_height/2, this->_length/2);
        glEnd();
    glPopMatrix();
}
