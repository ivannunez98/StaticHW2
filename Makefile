Static: matrix_static.o main_static.o
	g++ matrix_static.o main_static.o -o Static

matrix_static.o: matrix_static.c matrix_static.h
	g++ -c matrix_static.c

main_static.o: main_static.cpp
	g++ -c main_static.cpp

clean:
	rm *.o Static
