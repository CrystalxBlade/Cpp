#include <iostream>

// "const int* " is a pointer to a const int.
// "int* const " is a constant pointer to a int.
//  const int* const. 

int main()
{
    int x = 2;
    int y = 4;

    int* p = &x;
    
    std::cout << *p;

    return 0;
}