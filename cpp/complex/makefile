CC=g++
FLAGS=-Wall -Werror
BIN=run

build: main.o complex.o
	$(CC) $(FLAGS) -o $(BIN) main.o complex.o

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

complex.o: complex.cpp complex.hpp
	$(CC) $(FLAGS) -c complex.cpp

clean:
	rm *.o $(BIN)
