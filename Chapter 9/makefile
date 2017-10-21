CFLAGS = -Wall

all: 9_1 9_4

9_1 : 9_1.o
	g++ $(CFLAGS) -o $@ 9_1.o

9_4 : 9_4.o lib9_4.a
	g++ $(CFLAGS) -o $@ 9_4.o -L. -l9_4

9_1.o : 9_1.cpp 9_1.h
	g++ $(CFLAGS) -c $<

9_4.o : 9_4.cpp 9_4.h
	g++ $(CFLAGS) -c $<

lib9_4.o : lib9_4.cpp 9_4.h
	g++ $(CFLAGS) -c $<

lib9_4.a : lib9_4.o
	ar $(ARFLAGS) $@ $^