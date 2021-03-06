#ifndef JOINT_H
#define JOINT_H

class Joint {
    public:
        Joint(int id);
        bool driveJoint(int absolute_position);
        ~Joint();
        int getID();
        int getPos();
    private:
        int _current_position;
        int _id;
};

#endif // JOINT_H
