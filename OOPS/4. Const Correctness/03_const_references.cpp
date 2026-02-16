#include <iostream>

int main()
{
    int x = 5;

    const int& ref = x;

    std::cout << ref << '\n';       // ✔️ allowed (read)

    // ref = 20;                    // ❌ NOT allowed (const)

    x = 30;                         // ✔️ allowed (original can change)

    std::cout << ref << '\n';

    return 0;
}