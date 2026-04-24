// I must confess that this one was solved by the AI

#include <iostream>
#include <cstdlib>
#include "printBinary.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 2) {
        cout << "Must provide a number" << endl;
        exit(1);
    }
    cout << "sizeof(double) = " << sizeof(double) << endl;
    double d = atof(argv[1]);
    unsigned char *cp = reinterpret_cast<unsigned char*>(&d);
    for(int i = 0; i < sizeof(double); i++) {
        printBinary(cp[i]);
        if(i < sizeof(double) - 1) cout << ",";
    }
    cout << endl;
}