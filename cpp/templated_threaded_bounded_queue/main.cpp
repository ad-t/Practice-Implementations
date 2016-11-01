#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <exception>
#include <mutex>
#include <condition_variable>

#include "queue.cpp"

#define AMT_THREADS 10

TQueue<int> q = TQueue<int>();

void *producer(void *) {
    cout << "Producer thread started!" << endl;
    for (int i = 0; i < 10; i++) {
        q.addElement(1);
    }
    cout << "Producer thread finished!" << endl;
    pthread_exit(NULL);
}

void *consumer(void *) {
    cout << "Consumer thread started!" << endl;
    for (int i = 0; i < 100; i++) {
        q.pop();
    }
    cout << "Consumer thread finished!" << endl;
    pthread_exit(NULL);
}

int main (int argc, char * argv[]) {
    // the plan is to implement an ordered queue
    pthread_t threads[AMT_THREADS * 3];
    int i;
    try {
        for (i = 0; i < AMT_THREADS; i++) {
            pthread_create(&threads[i], NULL, producer, NULL);
        }
        while (i < AMT_THREADS * 3) {
            pthread_create(&threads[i], NULL, consumer, NULL);
            i++;
        }
    } catch (exception& e) {
        cout << e.what() << endl;
    }
    for (int i = 0; i < AMT_THREADS * 3; i++) {
        pthread_join(threads[i], NULL);
    }
    q.printElements();
    return EXIT_SUCCESS;
}
