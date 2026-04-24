#include <iostream>

using namespace std;

int main() {

    enum colors {
        RED,
        BLUE,
        GREEN,
        WHITE,
        PURPLE
    };

    colors myColor;

    for(int i = colors::RED; i <= colors::PURPLE; i++) {
        cout << "i = " << i << endl;
    }

    return 0;
}