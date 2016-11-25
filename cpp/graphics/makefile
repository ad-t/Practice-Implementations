CC=g++
FLAGS=-Wall -Werror -lGL -lglut -lGLU
BIN=run

build: main.o Cube.o
	$(CC) $(FLAGS) -o $(BIN) main.o Cube.o

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

Cube.o: assets/shapes/Cube.cpp assets/shapes/Cube.hpp
	$(CC) $(FLAGS) -c assets/shapes/Cube.cpp

clean:
	rm *.o $(BIN)
