#ifndef COMMANDER_H
#define COMMANDER_H

#include <iostream>
#include <string>
#include "JointMaster.hpp"

class Commander {
    public:
        Commander();
        bool makeCommand(std::string file, int jointID, int absolute_position);
        bool performCommands(std::string file);
        ~Commander();
    private:
        JointMaster * _jointMaster;
};

typedef struct _command {
    int _id;
    int _pos;
} Command;

#endif // COMMANDER_H
