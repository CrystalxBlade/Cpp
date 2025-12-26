#include <iostream>


/*

void changA(int* ptr) // pass by reference using pointers
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

result = 20 ✔️

*/

/*

void FuncA(int &b) // pass by reference using alias
{
    b = 20;
}
int main()
{
    int a = 10;
    FuncA(a);

    std::cout << "inside main fxn : " << a << std::endl;

    return 0;
}

reuslt = 20 ✔️

*/

/*

void FuncA(int &b) // pass by value
{
    b = 20;
}
int main()
{
    int a = 10;
    FuncA(a);

    std::cout << "inside main fxn : " << a << std::endl;

    return 0;
}

result = 10 ❌ becuz it is just a copy 

*/