#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "queue.hpp"

template <typename T>
TQueue<T>::TQueue() {
    this->elements = vector<T>();
}

template <typename T>
TQueue<T>::TQueue(int amt) {
    this->elements = vector<T>(amt);
}

template <typename T>
bool TQueue<T>::addElement(T element) {
    try {
        this->elements->push_back(element);
        return true;
    } catch (exception& e) { 
        cout << e.what() << "\n" << endl;
        return false; 
    }
}

