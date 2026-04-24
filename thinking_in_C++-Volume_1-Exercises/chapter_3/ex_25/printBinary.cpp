#include <iostream>

void printBinary(const unsigned char val) {
    for(int i = (sizeof(float) * 8); i >= 0; i--) {
        if(val & (1 << i)) {
            std::cout << "1";
        }
        else {
            std::cout << "0";
        }
    }
}