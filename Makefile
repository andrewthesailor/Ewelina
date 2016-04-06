OBJS=klasa.o czy_int.o test.o 
CC=g++
CFLAGS=-Wall
LFLAGS=
proj1.out: $(OBJS) wielomiany.h blad.h
	$(CXX) $(OBJS) -o proj1.out

czy_int.o:czy_int.cpp
	$(CXX) -c $(CFLAGS) czy_int.cpp -o czy_int.o


klasa.o:klasa.cpp
	$(CXX) -c $(CFLAGS) klasa.cpp -o klasa.o

test.o:test.cpp
	$(CXX) -c $(CFLAGS) test.cpp -o test.o

clean:
	rm -f *.o
.PHONY: clean
