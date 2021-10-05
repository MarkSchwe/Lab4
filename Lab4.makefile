//compiles all 5 relevant files, turns it into an executable, then runs it.
all:
	g++ -c node.cpp
	g++ -c node.h
	g++ -c LinkedList.cpp
	g++ -c LinkedList.h
	g++ -c Lab4.cpp
	g++ Lab4.o LinkedList.o node.o -o Lab4
	./Lab4
