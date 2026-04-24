app1: build/YourPets1.o
	g++ build/YourPets1.o -o build/app1

build/YourPets1.o: YourPets1.cpp
	mkdir -p build
	g++ -c YourPets1.cpp -o build/YourPets1.o

app2: build/YourPets2.o
	g++ build/YourPets2.o -o build/app2

build/YourPets2.o: YourPets2.cpp
	mkdir -p build
	g++ -c YourPets2.cpp -o build/YourPets2.o

run-app1: app1
	./build/app1

run-app2: app2
	./build/app2

run-all: run-app1 run-app2