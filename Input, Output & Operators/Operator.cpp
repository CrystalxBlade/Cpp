#include <iostream>

int main()
{
    // Arithmetic Operators 
    int a = 4, b = 2;

    std::cout<<"Addition = " << (a + b) << "\n";
    std::cout<<"Subtraction = " << (a - b) << "\n";
    std::cout<<"Product = " << (a * b) << "\n";
    std::cout<<"Division = " << (a / b) << "\n";
    std::cout<<"Modulus = " << (a % b) << "\n";


    //Relational Operators

    std::cout << "a == b = " << (a == b) << "\n";
    std::cout << "a != b = " << (a != b) << "\n";
    std::cout << "a > b = " << (a > b) << "\n";
    std::cout << "a < b = " << (a < b) << "\n";
    std::cout << "a >= b = " << (a >= b) << "\n";
    std::cout << "a <= b = " << (a <= b) << "\n";

    // Logical Operators
    
    bool x = true, y = false;

    std::cout << "x && y = " << (x && y) << "\n";  // false → 0
    std::cout << "x || y = " << (x || y) << "\n";  // true  → 1
    std::cout << "!x = " << (!x) << "\n";          // false → 0
    std::cout << "!y = " << (!y) << "\n";          // true  → 1

    return 0;
}