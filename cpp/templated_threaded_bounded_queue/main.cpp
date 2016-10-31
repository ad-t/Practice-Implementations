#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "queue.hpp"

int main (int argc, char * argv[]) {
    TQueue<int> q = TQueue<int>();
    q.addElement(6);
    q.addElement(4);
    q.addElement(2);
    q.addElement(3);
    q.addElement(5);
    q.addElement(1);
    q.addElement(9);
    q.addElement(13);
    q.addElement(12);
    q.addElement(19);
    q.addElement(30);
    return EXIT_SUCCESS;
}
