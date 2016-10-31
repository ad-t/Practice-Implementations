#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

template <class T>
class TQueue {
    public:
        TQueue();
        TQueue(int amt);
        ~TQueue();
        bool addElement(T element);

    private:
        vector<T> elements;
};
