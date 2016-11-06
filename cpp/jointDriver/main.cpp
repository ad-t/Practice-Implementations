#include <iostream>
#include <stdlib.h>

#include "Commander.hpp"
#define OUTPUT_FILE_NAME "commands.txt"

int main (int argc, char * argv[]) {
    
    Commander *c = new Commander();
    c->makeCommand(OUTPUT_FILE_NAME, 1, 250);
    c->makeCommand(OUTPUT_FILE_NAME, 6, 14);
    c->makeCommand(OUTPUT_FILE_NAME, 3, 156);

    c->performCommands(OUTPUT_FILE_NAME);

    return EXIT_SUCCESS;
}
