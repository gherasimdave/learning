#include <iostream>

using namespace std;

void function(void *vp, int size, int *bits) {
    int *p = static_cast<int*>(vp);
    for(int i = 0; i < size; i++) {
        *p <<= 1;
        *p |= *(bits + i);
    }
}

int main() {
    int a[10] = {0};
    int temp;
    void *vpa = static_cast<void*>(a);
    cout << "before" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    for(int i = 0; i < 10; i++) {
        temp = i;
        int temp_array[sizeof(int) * 8];
        for(int j = 1; j <= sizeof(int) * 8; j++) {
            temp_array[(sizeof(int) * 8) - j] = temp & 1;
            temp >>= 1;
        }
        function((int*)vpa + i, sizeof(int) * 8, temp_array);
    }
    cout << endl << "after" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}