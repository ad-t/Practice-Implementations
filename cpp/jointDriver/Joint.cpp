#include "Joint.hpp"

Joint::Joint(int id) {
    this->_current_position = 0;
    this->_id = id;
}

int Joint::getID() { return this->_id; }

bool Joint::driveJoint(int absolute_position) {
    bool forwards = true;
    if (this->_current_position > absolute_position) {
        forwards = false;
    }
    if (forwards) {
        this->_current_position++;
    } else {
        this->_current_position--;
    }
    return (this->_current_position == absolute_position) ? true : false;
}

Joint::~Joint() {}
