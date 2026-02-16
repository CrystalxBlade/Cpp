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

    //  “we can't change the address or the value through the pointer”

*/


     int x = 10;
     const int* const p = &x;

//     *p = 20;  // ❌
//      p = &x;  // ❌

   // we can't change address plus the value in the pointer"


    return 0;
}