// If you want to set the DEBUG run: g++ StringizingExpressions.cpp -o app -DDEBUG

#include <iostream>

using namespace std;

#ifdef DEBUG
#define P(A) cout << #A << ": " << (A) << endl;
#endif

int main() {
    int a = 1, b = 2, c = 3;
    P(a);
    P(b);
    P(c);
    P(a + b);
    P((c - a) / b);
}