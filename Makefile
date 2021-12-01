main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o


main.o: main.cpp funcs.h
	g++ -c main.cpp

tests.o: tests.cpp funcs.h
	g++ -c tests.cpp


clean:
	rm -f *o
