#include <iostream>

int main()
{
    //             1. Implicit Type Casting

    // int x = 10;
    // double y = x;

    // std::cout << "x " <<x <<"\n";
    // std::cout << "y " <<y <<"\n";

    //             2. Explicit Type Casting

    double pi = 3.14159;
    int value = (int)pi; // explicitly casting double → int

    std::cout << "pi: " << pi << "\n";
    std::cout << "value: " << value << "\n";

    return 0;
}    