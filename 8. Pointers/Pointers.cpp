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

    // Pointer to Pointer 
    int** c = &b;
    std::cout << "Address of b : " << &b << "\n";
    std::cout << "Value store in b : " << c << "\n";
    std::cout << "value pointed by c : " << *c << "\n";
    std::cout << "value pointed by **c  : " << **c << "\n";

    // Null Pointer
    int** ptr = nullptr;

    std::cout << ptr;
    std::cout << *ptr; // ❌ can't Dereference null Pointer
    
    return 0;
}