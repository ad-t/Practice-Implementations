#ifndef TQUEUE_H
#define TQUEUE_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
class TQueue {
    public:
        TQueue();
        TQueue(int amt);
        ~TQueue();
        bool addElement(T element);
        void printElements();

    private:
        vector<T> _elements;
        static bool ascendingComparator(T a, T b);
};

template <class T> TQueue<T>::TQueue() {
    this->_elements = vector<T>();
}

template <class T> TQueue<T>::TQueue(int amt) {
    this->_elements = vector<T>(amt);
}

template <class T> bool TQueue<T>::addElement(T element) {
    try {
        this->_elements.push_back(element);
        bool (*fnptr)(int, int);
        fnptr = &ascendingComparator;
        sort(this->_elements.begin(), this->_elements.end(), fnptr);
        return true;
    } catch (exception& e) { 
        cout << e.what() << "\n" << endl;
        return false; 
    }
}

template <class T>
void TQueue<T>::printElements() {
    for (T el : this->_elements) {
        cout << el << endl;
    }
}

template <class T>
TQueue<T>::~TQueue() {}

template <class T>
bool TQueue<T>::ascendingComparator(T a, T b) {
    return a < b;
}

#endif
