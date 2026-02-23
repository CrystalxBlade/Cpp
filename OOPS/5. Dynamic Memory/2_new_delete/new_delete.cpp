#include <iostream>

int main()
{
    // allocate memory using new
    int* p = new int(10);

    // use the memory
    std::cout << *p << '\n';

    // free memory using delete
    delete p;

    // explain in comments:
    // forgetting delete causes memory leak

    return 0;
}