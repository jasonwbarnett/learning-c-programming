CFLAGS=-Wall

all: ex3 ex4 ex5 ex6

clean:
	find . -maxdepth 1 -name 'ex*' -a ! -name '*.c' -exec rm -Rf {} \;
