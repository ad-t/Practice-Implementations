#include <vector>
#include <fstream>
#include <unistd.h>

#include "Commander.hpp"

#define AMT_JOINTS 9
bool allSuccessful(bool successful[], int width, int amtOperational);

using namespace std;

Commander::Commander() {
    this->_jointMaster = new JointMaster(AMT_JOINTS);
}

bool Commander::makeCommand(string file, int jointID, int absolute_position) {
    try {
        ofstream commands_file(file.c_str(), (ios::in | ios::app | ios::binary)); 
        commands_file << jointID << " " << absolute_position << endl;
        commands_file.close();
        return true;
    } catch (exception& e) {
        cout << e.what() << endl;
        return false;
    }
    return false;
}

bool Commander::performCommands(string file) {
    vector<Command> _commands = vector<Command>();
    ifstream commands_file(file.c_str());
    while (true) {
        Command c;
        commands_file >> c._id;
        commands_file >> c._pos;
        if (commands_file.eof()) { break; } 
        // cout << c._id << " " << c._pos << endl;
        _commands.push_back(c);
    }
    commands_file.close();
    bool successful[AMT_JOINTS] = { false };
    while (!allSuccessful(successful, AMT_JOINTS, _commands.size())) {
        for (Command c : _commands) {
            successful[c._id] = this->_jointMaster->drive(c._id, c._pos);
        }
        cout << this->_jointMaster;
    }
    cout << endl;
    return true;
}

bool allSuccessful(bool successful[], int width, int amtOperational) {
    int op = 0;
    for (int i = 0; i < width; i++) {
        if (op == amtOperational)   { return true; }
        if (successful[i] == true)  { op++; }
    }
    return false;
}

Commander::~Commander() {};
