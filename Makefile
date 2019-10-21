CC = gcc
CFLAGS = -c -Wall

all: menu

menu: menu.o diff.o sum.o abs_max.o abs_min.o
	$(CC) $^ -o menu

menu.o: menu.c diff.h sum.h abs_max.h abs_min.h
	$(CC) $(CFLAGS) $<

diff.o: diff.c diff.h
	$(CC) $(CFLAGS) $<

sum.o: sum.c sum.h
	$(CC) $(CFLAGS) $<

abs_max.o: abs_max.c abs_max.h
	$(CC) $(CFLAGS) $<

abs_min.o: abs_min.c abs_min.h
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o
