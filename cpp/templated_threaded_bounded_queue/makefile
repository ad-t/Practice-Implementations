CC=g++
CFLAGS=-Wall -Werror
BIN=queuetest

build: main.o queue.o
	$(CC) $(CFLAGS) -o $(BIN) main.o queue.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

queue.o: queue.o
	$(CC) $(CFLAGS) -c queue.c

clean:
	rm *.o $(BIN)
