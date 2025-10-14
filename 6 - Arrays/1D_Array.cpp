#include <iostream>

int main()
{
    int size = 5;
    int num [size] = {7, 2, 9, 8, 4};
    
    for(int i = 0; i < size ; i++)
    {
        std::cout << num[i] << " ";
    }
    
    int temp = num[0];

    for(int i = 0; i < size ; i++)
    {
        if (temp < num[i])
        {
            temp = num[i];
        }
    }
    std::cout << "Greatest num: " << temp << std::endl;

    return 0;
}