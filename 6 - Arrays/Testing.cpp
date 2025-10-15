#include <iostream>

int main()
{
    /*

    int size = 5;
    int num[size] = {4, 2, 9, 7, 6};

    for(int i = 0; i < size; i++)
    {
        std::cout << num[i] << "\n ";
    }
    int temp = num[0]; 

    for(int i = 0; i < size; i++)
    {
        if (temp < num[i])
        {
            temp = num[i];
        }
    }
    std::cout << "Greatest num: " << temp << std::endl;

    

    int size = 5;
    int num[size] = {4, 2, 9, 7, 6};

    for(int i = 0; i < size; i++)
    {
        std::cout << num[i] << "\n ";
    }
    int temp = num[0]; 

    for(int i = 0; i < size; i++)
    {
        if (temp > num[i])
        {
            temp = num[i];
        }
    }
    std::cout << "Smallest num: " << temp << std::endl;

    */

    double nums[] = {5,1,7,9,2};

    std::cout << sizeof(nums)/ sizeof(double) << std::endl;
    
    return 0;
}