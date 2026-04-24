#include <iostream>

using namespace std;

int main() {
    int a[5];
    cout << "sizeof(int) = " << sizeof(int) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&a[" << i << "] = " << (long)&a[i] << endl;
    }

    char b[5];
    cout << "sizeof(char) = " << sizeof(char) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&b[" << i << "] = " << (long)&b[i] << endl;
    }

    long int c[5];
    cout << "sizeof(long int) = " << sizeof(long int) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&c[" << i << "] = " << (long)&c[i] << endl;
    }

    float d[5];
    cout << "sizeof(float) = " << sizeof(float) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&d[" << i << "] = " << (long)&d[i] << endl;
    }

    double e[5];
    cout << "sizeof(double) = " << sizeof(double) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&e[" << i << "] = " << (long)&e[i] << endl;
    }
}