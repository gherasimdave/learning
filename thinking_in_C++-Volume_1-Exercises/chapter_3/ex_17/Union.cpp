#include <iostream>

using namespace std;

union Packed {
    char i;
    short j;
    int k;
    long l;
    float f;
    long double d;
};

int main() {
    cout << "sizeof(Packed) = " << sizeof(Packed) << endl;
    Packed x;
    x.i = 'c';
    cout << "x.i = " << x.i << endl;
    cout << "x.d = " << x.d << endl;
    x.d = 3.14159;
    cout << "x.d = " << x.d << endl;
}