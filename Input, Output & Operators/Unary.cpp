#include <iostream>

int main() {
    int x = 10;

    // Unary plus and minus
    std::cout << "Unary +x: " << (+x) << "\n";
    std::cout << "Unary -x: " << (-x) << "\n";

    // Increment / Decrement
    std::cout << "Pre-increment (++x): " << (++x) << "\n";
    std::cout << "Post-increment (x++): " << (x++) << "\n";
    std::cout << "After post-increment: " << x << "\n";

    std::cout << "Pre-decrement (--x): " << (--x) << "\n";
    std::cout << "Post-decrement (x--): " << (x--) << "\n";
    std::cout << "After post-decrement: " << x << "\n";

    // Logical NOT
    bool flag = true;
    std::cout << "!flag: " << (!flag) << "\n";

    // Bitwise NOT
    int y = 5; // 0101 in binary
    std::cout << "~y: " << (~y) << "\n";

    // Address-of and dereference
    int z = 42;
    int* ptr = &z;
    std::cout << "Address of z: " << ptr << "\n";
    std::cout << "Value at *ptr: " << *ptr << "\n";

    return 0;
}
