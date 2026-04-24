#include <iostream>

using namespace std;

void functionRefference(string &s) {
    s = "Reference";
}

void functionPointer(string *s) {
    *s = "Pointer";
}

int main() {
    string s = "Original";
    cout << "Before function call: " << s << endl;
    functionRefference(s);
    cout << "After functionRefference call: " << s << endl;
    functionPointer(&s);
    cout << "After functionPointer call: " << s << endl;
    return 0;
}