#include <iostream>

int main()
{
    
    int num[5];
    std::cout << "Input 5 digits: ";
    
    for(int i = 0; i < 5; i++)
    {
        std::cin >> num[i];
    }

    for(int n : num)
    {
        std::cout << n << " ";
    }
}