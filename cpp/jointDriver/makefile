CC=g++
FLAGS=-Wall -Werror -g
BIN=run

build: main.o Commander.o JointMaster.o Joint.o
	$(CC) $(FLAGS) -o $(BIN) main.o Commander.o JointMaster.o Joint.o

main.o: main.cpp
	$(CC) $(FLAGS) -c main.cpp

Commander.o: Commander.cpp Commander.hpp
	$(CC) $(FLAGS) -c Commander.cpp

JointMaster.o: JointMaster.hpp JointMaster.cpp
	$(CC) $(FLAGS) -c JointMaster.cpp

Joint.o: Joint.cpp Joint.hpp
	$(CC) $(FLAGS) -c Joint.cpp

clean:
	rm *.o run
