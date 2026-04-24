# Makefile for Exercise 1 of Chapter 3 of Thinking in C++
build/app: build/main.o build/printBinary.o
	g++ build/main.o build/printBinary.o -o build/app

build/main.o: main.cpp
	mkdir -p build
	g++ -c main.cpp -o build/main.o

build/printBinary.o: printBinary.cpp printBinary.h
	mkdir -p build
	g++ -c printBinary.cpp -o build/printBinary.o