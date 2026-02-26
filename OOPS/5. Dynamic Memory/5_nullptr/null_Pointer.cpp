#include <iostream>

// Safety checks
// protect from causing crashes

int main()
{
    int* p = new int(10);
    delete p;
    p = nullptr; // Pointer pointing to freed memory
}
