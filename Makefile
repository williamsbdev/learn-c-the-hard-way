CFLAGS=-Wall
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.C,%.o,$(SRCS))

clean:
	rm -f *.o
	rm -rf *.dSYM

all:
	cc -Wall ex1.c -o ex1.o
	cc -Wall ex3.c -o ex3.o
