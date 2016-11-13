CC=g++
FLAGS=-Wall -Werror -lGL -lglut
BIN=build

build: main.o
	$(CC) $(FLAGS) -o $(BIN) main.o

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

clean:
	rm *.o build
