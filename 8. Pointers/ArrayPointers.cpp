#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    std::cout << *arr;        // Array names are constant pointers unlike normal pointers

    return 0;
}