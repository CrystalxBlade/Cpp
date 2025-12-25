#include <iostream>

int main()
{
    int a = 10;
    int* b = &a;
    
    std::cout << "The address of a : " << &a << "\n";
    std::cout << &a;
    return 0;
}