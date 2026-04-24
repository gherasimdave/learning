#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for(int i = 2; i < 1000; i++) {
        bool isPrime = true;
        for(int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            count++;
        }

    }
    cout << endl;
    cout << "Count: " << count << endl;
    return 0;
}