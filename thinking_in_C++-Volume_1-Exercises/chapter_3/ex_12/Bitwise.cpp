#include <iostream>
#include "printBinary.h"

using namespace std;

#define PR(STR, EXPR) \
    cout << STR; printBinary(EXPR); cout << endl;

int main() {
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    a = getval;
    PR("a in binary: ", a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("b in binary: ", b);
    unsigned char d = a | b;
    PR("a | b = ", d);
    d = a & b;
    PR("a & b = ", d);
    d = a ^ b;
    PR("a ^ b = ", d);
    d = ~a;
    PR("~a = ", d);
    d = ~b;
    PR("~b = ", d);

    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    a |= c;
    PR("a |= c; a = ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b ^= a; b = ", b);
}