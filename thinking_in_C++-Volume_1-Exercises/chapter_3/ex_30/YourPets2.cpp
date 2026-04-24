#include <iostream>

using namespace std;

int dog, cat, bird, fish;

void f(int pet) {
    cout << "pet id number: " << pet << endl;
}

int main() {
    int i, j, k;
    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&f << endl;
    cout << "cat: " << (long)&f << endl;
    cout << "bird: " << (long)&f << endl;
    cout << "fish: " << (long)&f << endl;
    cout << "i: " << (long)&f << endl;
    cout << "j: " << (long)&f << endl;
    cout << "k: " << (long)&f << endl;
}