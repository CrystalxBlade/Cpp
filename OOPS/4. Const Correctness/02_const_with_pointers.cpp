#include <iostream>

// "const int* " is a pointer to a const int.
// "int* const " is a constant pointer to a int.
//  const int* const. 

int main()
{
    // “we can change the address stored in the pointer, but not the value through the pointer”
    int y = 4;
    
    const int* p;
//   *p = 30;     ❌ NOT allowed (value is const)
     p = &y;   // ✔️ allowed (pointer can change)
    
    std::cout << *p;

    return 0;
}