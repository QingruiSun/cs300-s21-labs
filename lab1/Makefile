CFLAGS = -O3
.PHONY: all clean format

all: test_reverse.o reverse.o
	gcc test_reverse.o reverse.o -o test_reverse
reverse.o: reverse.h reverse.c
	gcc $(CFLAGS) -c reverse.c -o reverse.o
test_reverse.o: reverse.h reverse.c test_reverse.c
	gcc $(CFLAGS) -c test_reverse.c -o test_reverse.o
clean:
	rm -f test_reverse reverse.o test_reverse.o
format:
	clang-format -style=Google -i reverse.h reverse.c test_reverse.c 

