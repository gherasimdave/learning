app: build/main.o
	g++ build/main.o -o build/app

debug: build/main_debug.o
	g++ build/main_debug.o -o build/app_debug

build/main.o: main.cpp
	mkdir -p build
	g++ -c main.cpp -o build/main.o

build/main_debug.o: main.cpp
	mkdir -p build
	g++ -c main.cpp -o build/main_debug.o -DDEBUG