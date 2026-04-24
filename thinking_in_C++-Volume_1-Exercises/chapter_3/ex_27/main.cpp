#include <iostream>

using namespace std;

int main() {
    const double a[5] = {1, 2, 3, 4, 5};
    volatile double b[5] = {6, 7, 8, 9, 10};

    for(int i = 0; i < 5; i++) {
        double *value_a = const_cast<double*>(a + i);
        *value_a = a[i] * 10;
        double *value_b = const_cast<double*>(&b[i]);
        *value_b = b[i] * 20;
    }

    cout << "const double" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << "volatile double" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    return 0;
}