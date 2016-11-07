#include <vector>
#include <fstream>

#include "Commander.hpp"

#define AMT_JOINTS 6

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
        _commands.push_back(c);
        if (commands_file.eof()) { break; } 
        cout << c._id << " " << c._pos << endl;
    }
    commands_file.close();
    for (Command c : _commands) {
        bool successful = this->_jointMaster->drive(c._id, c._pos);
        if (!successful) {
            return false;
        }
    }
    return true;
}

Commander::~Commander() {};
