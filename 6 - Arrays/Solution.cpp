#include <iostream>

int main()
{
    /*

    Q1.
    -------------------------------->

    const int size = 5;
    int num[size];

    std::cout << "Input 5 digits: ";
    
    for(int i = 0; i < size; i++)
    {
        std::cin >> num[i];
    }

    for(int n : num)
    {
        std::cout << n << " ";
    }

    */

    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 0, 8, 14, 10};

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += num[i];
    }

    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}