CC=g++
FLAGS=-Wall -Werror -lGL -lglut -lGLU
BIN=run

build: main.o Cube.o Camera.o Map.o Shape.o
	$(CC) $(FLAGS) -o $(BIN) main.o Cube.o Camera.o Map.o Shape.o

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

Cube.o: assets/shapes/Cube.cpp assets/shapes/Cube.hpp
	$(CC) $(FLAGS) -c assets/shapes/Cube.cpp

Camera.o: assets/camera/Camera.hpp assets/camera/Camera.cpp
	$(CC) $(FLAGS) -c assets/camera/Camera.cpp

Map.o: assets/shapes/Map.hpp assets/shapes/Map.hpp
	$(CC) $(FLAGS) -c assets/shapes/Map.cpp

Shape.o: assets/shapes/Shape.hpp assets/shapes/Shape.cpp
	$(CC) $(FLAGS) -c assets/shapes/Shape.cpp

clean:
	rm *.o $(BIN)
