// The compiler does not support this type of operators.
??=include <iostream>

int main() ??<
    int arr??(3??) = ??<1, 2, 3??>;

    std::cout << "Testing trigraphs" << std::endl;
    std::cout << "arr[0] = " << arr??(0??) << std::endl;

    // Tests ??' as ^
    int x = 5;
    int y = 3;
    std::cout << "5 XOR 3 = " << (x ??' y) << std::endl;

    // Tests ??! as |
    std::cout << "5 OR 3 = " << (x ??! y) << std::endl;

    // Tests ??- as ~
    std::cout << "NOT 5 = " << (??-x) << std::endl;

    // Tests ??/ as backslash for line continuation
    std::cout << "Line continuation works" << ??/
    std::endl;

    return 0;
??>