#include <iostream>

using namespace std;

int f(double val) {
    cout << "val = " << val << endl;
    return static_cast<int>(val);
}

int main() {
    int (*fptr)(double) = f;
    int a = (*fptr)(4.14);
    cout << "function return is: " << a << endl;
}