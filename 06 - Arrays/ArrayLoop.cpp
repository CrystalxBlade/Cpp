#include <iostream>

int main()
{
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    int nums [size];

    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter the index: " << i << " = ";
        std::cin >> nums[i];
    }

    std::cout << "Numbers stored: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << nums[i] << " ";
    }

    return 0;
}