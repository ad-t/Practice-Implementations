CC=g++
FLAGS=-Wall -Werror
BIN=run

build: main.o ShapeStore.o Shape.o Circle.o Triangle.o Rectangle.o
	$(CC) $(FLAGS) -o $(BIN) main.o ShapeStore.o Shape.o Circle.o Triangle.o Rectangle.o

main.o: main.cpp 
	$(CC) $(FLAGS) -c main.cpp

ShapeStore.o: ShapeStore.cpp ShapeStore.hpp
	$(CC) $(FLAGS) -c ShapeStore.cpp

Shape.o: shape_files/Shape.cpp shape_files/Shape.hpp
	$(CC) $(FLAGS) -c shape_files/Shape.cpp

Circle.o: shape_files/Circle.cpp shape_files/Circle.hpp
	$(CC) $(FLAGS) -c shape_files/Circle.cpp

Triangle.o: shape_files/Triangle.cpp shape_files/Triangle.hpp
	$(CC) $(FLAGS) -c shape_files/Triangle.cpp

Rectangle.o: shape_files/Rectangle.cpp shape_files/Rectangle.hpp
	$(CC) $(FLAGS) -c shape_files/Rectangle.cpp
clean:
	rm *.o run
