#include <iostream>

using namespace std;

typedef struct {
    int i, j, k;
} ThreeDpoint;

int main() {
    ThreeDpoint p[5];
    cout << "sizeof(ThreeDpoint) = " << sizeof(ThreeDpoint) << endl;
    for(int i = 0; i < 5; i++) {
        cout << "&p[" << i << "] = " << (long)&p[i] << endl;
    }
}