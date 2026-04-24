#include <iostream>
#include "printBinary.h"

using namespace std;

#define PR(STR, EXPR) \
    cout << STR; printBinary(EXPR); cout << endl;

int main() {
    float f = 5;
    unsigned char *pf = (unsigned char*)&f;
    PR("pf: ", *pf);
}