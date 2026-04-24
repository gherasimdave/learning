build/app: build/Bitwise.o build/printBinary.o
	g++ build/Bitwise.o build/printBinary.o -o build/app

build/Bitwise.o: Bitwise.cpp
	mkdir -p build
	g++ -c Bitwise.cpp -o build/Bitwise.o

build/printBinary.o: printBinary.cpp printBinary.h
	mkdir -p build
	g++ -c printBinary.cpp -o build/printBinary.o