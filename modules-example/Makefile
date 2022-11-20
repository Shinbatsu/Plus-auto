all: res

res: main.o add.o 
	g++ main.o add.o  -o res

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

clean:
	rm -rf res *.o
