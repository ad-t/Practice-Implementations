#include "JointMaster.hpp"

JointMaster::JointMaster(int amt) {
    this->_joints = vector<Joint *>();
    for (int i = 0; i < amt; i++) {
        this->_joints.push_back(new Joint(i));
    }
}

bool JointMaster::drive(unsigned int jointID, int absolute_position) {
    if (jointID >= this->_joints.size()) { return false; }
    return this->_joints[jointID]->driveJoint(absolute_position);
}   

JointMaster::~JointMaster() {}
