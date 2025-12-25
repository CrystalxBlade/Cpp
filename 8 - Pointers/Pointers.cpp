#include <iostream>

int main()
{
    int a = 10;
    int* b = &a;
    
    // & ----> (Address of) Operator
    std::cout << "The address of a : " <<&a << "\n";
    std::cout << "The address stored in b : " << b << "\n";

    // * ----> (value at) Dereference Operator
    std::cout << "The value at address of b : " << *b << "\n";
    return 0;
}