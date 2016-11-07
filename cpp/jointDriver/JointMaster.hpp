#ifndef JOINT_MASTER_H
#define JOINT_MASTER_H

#include <iostream>
#include <vector>

using namespace std;

#include "Joint.hpp"

class JointMaster {
    public:
        JointMaster(int amt);
        bool drive(unsigned int jointID, int absolute_position);
        friend ostream& operator<<(ostream& os, JointMaster *j) {
            os << "\r";
            for (Joint * jnt : j->_joints) {
                os << jnt->getID() << ": " << jnt->getPos() << " ";
            }
            return os;
        }
        ~JointMaster();
    private:
        std::vector<Joint *> _joints;
};

#endif // JOINT_MASTER_H
