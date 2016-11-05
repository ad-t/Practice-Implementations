#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <exception>

#include "queue.cpp"

using namespace std;

#define AMT_THREADS 10

TQueue<int> q = TQueue<int>();

void *producer(void *) {
    cout << "Producer thread started!" << endl;
    for (int i = 0; i < 10; i++) {
        q.addElement(i);
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
    /* MULTITHREADING CODE
     * pthread_t threads[AMT_THREADS * 3];
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
    */
    TQueue<int> qint = TQueue<int>();
    TQueue<int> qint2 = TQueue<int>();
    for (int i = 0; i < 10; i++) {
        qint.addElement(i);
        qint2.addElement(10 - i);
    }

    qint.printElements();
    qint2.printElements();

    TQueue<int> q3 = qint + qint2;
    q3.printElements();
    return EXIT_SUCCESS;
}
