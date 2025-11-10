#include <iostream>

int main()
{
    int arr[] = {5, 20, 12, 3, 47};

    for(int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}