#include <iostream>

int main()
{
    /*

    int num [5] = {7, 2, 9, 8, 4};
    
    for(int i = 0; i < 5 ; i++)
    {
        std::cout << num[i] << " ";
    }
    
    int temp = num[0];

    for(int i = 0; i < 5; i++)
    {
        if (temp < num[i])
        {
            temp = num[i];
        }
    }
    std::cout << "Greatest num: " << temp << std::endl;

    */



    int num[8];
    int sum = 0;
    std::cout << "Enter 8 values: ";

    for(int i = 0; i < 8; i++)
    {
        std::cin >> num[i];
    }

    for(int i = 0; i < 8; i++)
    {
        sum += num[i];
    }

    std::cout << "Sum is : " << sum << std::endl;

    return 0;
}