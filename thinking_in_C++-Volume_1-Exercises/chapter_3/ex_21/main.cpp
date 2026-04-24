#include <iostream>

using namespace std;

int main() {
    string s[10];
    for(int i = 0; i < 10; i++) {
        s[i] = "this is a test string for an array";
    }
    cout << "The array contains:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "s[" << i << "] = " << s[i] << endl;
    }
}