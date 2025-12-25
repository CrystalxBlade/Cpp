#include <iostream>

int main()
{
    int a = 10;
    int* b = &a;
    
    // & ----> (Address of) Operator
    std::cout << "The address of a : " <<&a << "\n";
    std::cout << "The value of b : " << b;

    
    return 0;
}