CFLAGS = -Wall

all: 9_1 9_4

9_1 : 9_1.o
	g++ $(CFLAGS) -o $@ 9_1.o

9_4 : 9_4.o 9_4.a
	g++ $(CFLAGS) -o $@ 9_4.o

9_1.o : 9_1.cpp 9_1.h
	g++ $(CFLAGS) -c $<

9_4.o : 9_4.cpp 9_4.h
	g++ $(CFLAGS) -c $<

9_4.a : 9_4a.cpp 9_4.h
	g++ $(CFLAGS) -c $<