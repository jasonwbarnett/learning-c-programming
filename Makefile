CFLAGS=-Wall

all: ex3 ex4 ex5 ex6 sine

clean:
	rm -f sine
	find . -maxdepth 1 -name 'ex*' -a ! -name '*.c' -exec rm -Rf {} \;
