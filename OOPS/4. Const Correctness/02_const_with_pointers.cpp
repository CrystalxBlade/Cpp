#include <iostream>

// "const int* " is a pointer to a const int.
// "int* const " is a constant pointer to a int.
//  const int* const. 

int main()
{ 
/*      
    int x = 2;
    int y = 4;
    
    const int* p = &x;
    
//  *p = 30;     ❌ NOT allowed (value is const)
     p = &y;   // ✔️ allowed (pointer can change)

    // “we can change the address stored in the pointer, but not the value through the pointer”
*/



/*
    int x = 2;
    int y = 4;

    int* const p = &x;
    
    *p = 30;   // ✔️ allowed (value can change)
//   p = &y;   // ❌ NOT allowed (pointer is const)

    //  “we can change the value stored in the pointer, but not the address through the pointer”

*/



    return 0;
}