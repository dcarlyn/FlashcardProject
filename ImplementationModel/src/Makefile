CC = g++

CFLAGS = -std=c++11 -pthread -c -Wall

flashcard: main.o log.o
	$(CC) main.o log.o -o flashcard

main.o: main.cpp log.cpp log.hpp
	$(CC) $(CFLAGS) main.cpp log.cpp
 
clean:
	rm *.o flashcard