#include <iostream>


void changA(int* ptr)
{
    *ptr = 20;
}
int main()
{
    int a = 10;
    changA(&a);

    std::cout << "inside main fxn: " << a << std::endl; 
    return 0;
}