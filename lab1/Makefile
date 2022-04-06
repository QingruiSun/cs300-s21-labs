CFLAGS = -O3
.PHONY: all clean format

all: reverse_test
clean:
	rm -f reverse_test
format:
	clang-format -style=Google -i reverse.h reverse.c test_reverse.c 
reverse_test: test_reverse.c reverse.c reverse.h
	gcc $(CFLAGS) test_reverse.c reverse.c -o reverse_test
