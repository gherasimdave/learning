#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    voidFunction1();
    voidFunction2(2, 3.2, 'C');

    int result1 = intFunction1();
    cout << "Main result call intFunction1(): " << result1 << endl;
    int result2 = intFunction2(56);
    cout << "Main result call intFunction2(56): " << result2 << endl;

    float floatResult1 = floatFunction1();
    cout << "Main result call floatFunction1(): " << floatResult1 << endl;
    float floatResult2 = floatFunction2(3.2, 2.5);
    cout << "Main result call floatFunction2(3.2, 2.5): " << floatResult2 << endl;

    char charResult1 = charFunction1();
    cout << "Main result call charFunction1(): " << charResult1 << endl;
    char charResult2 = charFunction2('A', 'B');
    cout << "Main result call charFunction2('A', 'B'): " << charResult2 << endl;

    return 0;
}