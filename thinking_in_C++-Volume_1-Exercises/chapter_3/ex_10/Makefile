build/app: build/FileStatic.o build/FileStatic2.o
	g++ build/FileStatic.o build/FileStatic2.o -o build/app

build/FileStatic.o: FileStatic.cpp
	mkdir -p build
	g++ -c FileStatic.cpp -o build/FileStatic.o

build/FileStatic2.o: FileStatic2.cpp
	mkdir -p build
	g++ -c FileStatic2.cpp -o build/FileStatic2.o