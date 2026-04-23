#include <iostream>

using namespace std;

int main() {
    int radius;
    cout << "Give me the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle with radius of " << radius << " is: "
         << radius * radius * 3.14 << endl;
}