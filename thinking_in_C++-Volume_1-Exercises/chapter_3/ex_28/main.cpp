#include <iostream>

using namespace std;

void function(double *val, int size) {
    for(int i = 0; i < size; i++) {
        cout << "elem nr. " << i << " is: " << *(val + i) << endl;
    }
}

int main() {
    double a[10] = {0};
    cout << "empty array" << endl;
    function(a, 10);
    unsigned char *pd = reinterpret_cast<unsigned char*>(a);
    for(int i = 0; i < sizeof(double) * 10; i++) {
        *(pd + i) = 1;
    }
    cout << "\nedited array" << endl;
    function(a, 10);
    return 0;
}