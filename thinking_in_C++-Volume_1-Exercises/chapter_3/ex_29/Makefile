# Makefile for Exercise 1 of Chapter 3 of Thinking in C++
build/app: build/FloatingAsBinary.o build/printBinary.o
	g++ build/FloatingAsBinary.o build/printBinary.o -o build/app

build/FloatingAsBinary.o: FloatingAsBinary.cpp
	mkdir -p build
	g++ -c FloatingAsBinary.cpp -o build/FloatingAsBinary.o

build/printBinary.o: printBinary.cpp printBinary.h
	mkdir -p build
	g++ -c printBinary.cpp -o build/printBinary.o