#include <iostream>

using namespace std;

float func(char a) {
    float b = 3.14f;
    cout << "func received a = " << a << endl;
    return b;
}

float (*ptrFunc(int c))(char) {
    cout << "ptrFunc was called with argument = " << c << endl;
    if(c > 0) {
        return func;
    }
    else {
        return nullptr;
    }
}

int main() {
    float (*(*fp)(int))(char);
    fp = ptrFunc;
    float (*fp2)(char) = fp(4);
    fp2('%');
}