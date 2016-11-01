CC=g++
CFLAGS=-Wall -Werror
BIN=queuetest

build: main.o queue.o
	$(CC) $(CFLAGS) queue.o main.o -o $(BIN)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

queue.o: queue.cpp queue.hpp
	$(CC) $(CFLAGS) -c queue.cpp

clean:
	rm *.o $(BIN)
