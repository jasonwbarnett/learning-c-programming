CFLAGS=-Wall -g

all: ex3

clean:
	find . -maxdepth 1 -name 'ex*' -a ! -name '*.c' -exec rm {} \;
