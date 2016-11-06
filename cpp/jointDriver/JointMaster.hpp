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
        ~JointMaster();
    private:
        std::vector<Joint *> _joints;
};

#endif // JOINT_MASTER_H
