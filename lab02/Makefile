CC=gcc
CFLAGS=-Wall -g -std=c99

all : vector

vector: vector.o test_vector.o
	$(CC) $(CFLAGS) -o vector vector.o test_vector.o

vector.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c


test_vector.o: test_vector.c vector.h
	$(CC) $(CFLAGS) -c test_vector.c

clean:
	rm vector vector.o test_vector.o


