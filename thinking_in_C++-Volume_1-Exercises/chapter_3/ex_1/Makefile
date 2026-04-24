# Makefile for Exercise 1 of Chapter 3 of Thinking in C++
build/app: build/main.o build/functions.o
	g++ build/main.o build/functions.o -o build/app

build/main.o: main.cpp
	mkdir -p build
	g++ -c main.cpp -o build/main.o

build/functions.o: functions.cpp
	mkdir -p build
	g++ -c functions.cpp -o build/functions.o