#include <iostream>
#include "functions.h"

using namespace std;

void voidFunction1() {
    cout << "This is voidFunction1" << endl;
}

void voidFunction2(int a, float b, char c) {
    cout << "This is voidFunction2 with parameters: " << a << ", " << b << ", " << c << endl;
}

int intFunction1() {
    cout << "This is intFunction1" << endl;
    return 42;
}

int intFunction2(int a) {
    cout << "This is intFunction2 with parameter: " << a << endl;
    return a;
}

float floatFunction1() {
    float pi = 3.14;
    cout << "This is floatFunction1" << endl;
    return pi;
}

float floatFunction2(float b, float c) {
    cout << "This is floatFunction2 with parameters: " << b << ", " << c << endl;
    return b + c;
}

char charFunction1() {
    cout << "This is charFunction1" << endl;
    return 'A';
}

char charFunction2(char d, char e) {
    cout << "This is charFunction2 with parameters: " << d << ", " << e << endl;
    return d;
}