#include <iostream>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>
#include "assets/shapes/Shape.hpp"
#include "assets/shapes/Cube.hpp"
#include "assets/camera/Camera.hpp"
#include "assets/shapes/Map.hpp"

using namespace std;

Camera *camera = new Camera();

void init(int argc, char *argv[]);
void handleResize(int w, int h);
void draw();
void keyboardFunctions(unsigned char key, int x, int y);
void mousePassive(int x, int y);
void mouseActive(int button, int state, int x, int y);
Map *map = new Map(10);

int main (int argc, char * argv[]) {
    init(argc, argv);
    glutDisplayFunc(draw);
    glutReshapeFunc(handleResize);
    glutKeyboardFunc(keyboardFunctions);
    glutMouseFunc(mouseActive);
    glutPassiveMotionFunc(mousePassive);
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
    gluPerspective(45.0, double(w)/double(h), 0.1, 200.0);
}

void draw() {
    // axis: x (right) / y (up) / z (closeness)
    camera->refresh();
    glPushMatrix();
        map->draw();
    glPopMatrix();
    glPushMatrix();
        glBegin(GL_LINES);
            // blue is x axis
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0, 0, 0);
            glVertex3f(5, 0, 0);
            // green is y axis
            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(0, 0, 0);
            glVertex3f(0, 5, 0);
            // red is z axis
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0, 0, 0);
            glVertex3f(0, 0, 5);
        glEnd();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboardFunctions(unsigned char key, int mx, int my) {
    switch(key) {
        case 'w':
            camera->moveForwards();
            break;
        case 's':
            camera->moveBackwards();
            break;
        case 'a':
            camera->moveLeft();
            break;
        case 'd':
            camera->moveRight();
            break;
        case 'q':
            camera->moveUp();
            break;
        case 'e':
            camera->moveDown();
            break;
        case 'z':
            camera->rotateLeft(10.0);
            break;
        case 'c':
            camera->rotateRight(10.0);
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
    }
    draw();
}

void mousePassive(int x, int y) {
    cout << "MOUSE: x=" << x << " y=" << y << endl;
}
void mouseActive(int button, int state, int x, int y) {
    cout << "MOUSE CLICK @: x=" << x << " y=" << y << endl;
}
