#include <iostream>

void printNumber(const int& x)
{
    // x = 10;   // ❌ NOT allowed
    std::cout << x << '\n';
}

int main()
{
    int a = 5;
    printNumber(a);

    return 0;
}
