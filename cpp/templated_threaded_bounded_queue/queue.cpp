#ifndef TQUEUE_H
#define TQUEUE_H

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
        void printElements();

    private:
        vector<T> elements;
};

template <class T> TQueue<T>::TQueue() {
    this->elements = vector<T>();
}

template <class T> TQueue<T>::TQueue(int amt) {
    this->elements = vector<T>(amt);
}

template <class T> bool TQueue<T>::addElement(T element) {
    try {
        this->elements.push_back(element);
        return true;
    } catch (exception& e) { 
        cout << e.what() << "\n" << endl;
        return false; 
    }
}

template <class T>
void TQueue<T>::printElements() {
    for (T el : this->elements) {
        cout << el << endl;
    }
}

template <class T>
TQueue<T>::~TQueue() {}

#endif
