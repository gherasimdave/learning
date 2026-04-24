#include <iostream>

using namespace std;

void func() {
    // static int i = 0;
    int i = 0;
    cout << "i= " << ++i << endl;
}

int main() {
    for(int x = 0; x < 10; x++) {
        func();
    }
}

// When static word is used the instantiation takes place only once, first time whn func() will be called,
// for the next calls that instance will be used. If the static word is removed, the instantiation will 
// take place every time the func() will be called.