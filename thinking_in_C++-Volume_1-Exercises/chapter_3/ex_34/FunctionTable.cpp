#include <iostream>

using namespace std;

#define DF(N) string N() { return "with name "#N; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

string (*func_table[])() = { a, b, c, d, e, f, g };

int main() {
    while(1) {
        cout << "press a key from 'a' to 'g' "
                "or q to quit" << endl;
        char c, cr;
        cin.get(c);
        cin.get(cr);
        if(c == 'q') {
            break;
        }
        if(c < 'a' || c > 'g') {
            continue;
        }
        cout << "function " << (*func_table[c - 'a'])() << " was called" << endl;
    }
}