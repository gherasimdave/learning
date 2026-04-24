#include <iostream>

using namespace std;

// The reason for 16 is because the compiler does this for memory alignment.
// For example using 5 element in arrays I end up with a gap between them.
int a[15];
char c;
int b[16];

int main() {
    for(int i = 0; i < 32; i++) {
        *(a + i) = i * 10;
    }

    cout << "First array is: " << endl;
    for(int i = 0; i < 15; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << endl << "Second array is: " << endl;
    for(int i = 0; i < 16; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    return 0;
}