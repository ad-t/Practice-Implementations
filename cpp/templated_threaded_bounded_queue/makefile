CC=g++
CFLAGS=-Wall -Werror
BIN=queuetest
THREADINGLINKER=-lpthread

build: queue.o main.o 
	$(CC) $(CFLAGS) queue.o main.o -o $(BIN) $(THREADINGLINKER)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp $(THREADINGLINKER)

queue.o: queue.cpp queue.hpp
	$(CC) $(CFLAGS) -c queue.cpp $(THREADINGLINKER)

clean:
	rm *.o $(BIN)
