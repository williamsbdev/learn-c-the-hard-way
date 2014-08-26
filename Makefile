CFLAGS=-Wall -g

clean:
	rm -f ex1
	rm -rf ex1.dSYM

all:
	cc -Wall -g ex1.c -o ex1
