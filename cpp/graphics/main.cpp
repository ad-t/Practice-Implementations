#include <iostream>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include "assets/shapes/Shape.hpp"
#include "assets/shapes/Cube.hpp"

using namespace std;
double x = 0.0;
double z = 0.0;

void init(int argc, char *argv[]);
void handleResize(int w, int h);
void draw();
void keyboardFunctions(unsigned char key, int x, int y);

int main (int argc, char * argv[]) {
    init(argc, argv);
    glutDisplayFunc(draw);
    glutReshapeFunc(handleResize);
    glutKeyboardFunc(keyboardFunctions);
    glutMainLoop();
    return EXIT_SUCCESS; 
}

void init(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("test");
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
}

void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // degrees, width to height ratio, near z clipping range, far z clipping range
    gluPerspective(90.0, double(w)/double(h), 0.1, 200.0);
}

void draw() {
    // axis: x (right) / y (up) / z (closeness)
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity();
    cout << x << " " << z << endl;
    glLoadIdentity();
    gluLookAt(x, 0, z + 5, 0, 0, 0, 0, 1, 0);
    Cube *c = new Cube(3, 3, 3);
    glPushMatrix();
        glTranslatef(0, 0, -5);
        glRotatef(45, 1, 0, 0);
        glRotatef(45, 0, 1, 0);
        c->draw();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboardFunctions(unsigned char key, int mx, int my) {
    switch(key) {
        case 'w':
            z += 0.1;
            break;
        case 's':
            z -= 0.1;
            break;
        case 'a':
            x -= 0.1;
            break;
        case 'd':
            x += 0.1;
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
    }
    cout << x << endl;
    draw();
}
