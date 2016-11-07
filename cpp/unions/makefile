CC=g++
FLAGS=-Wall -Werror
BIN=run

build: main.o
	$(CC) $(FLAGS) -o $(BIN) main.o

main.o: main.cpp Shape.hpp
	$(CC) $(FLAGS) -c main.cpp

clean:
	rm *.o run
