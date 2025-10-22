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

    Q2.
    -------------------------------->

    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 0, 8, 14, 10};

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += num[i];
    }

    std::cout << "Sum of elements: " << sum << std::endl;

    Q3.
    -------------------------------->

    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 0, 8, 14, 10};

    int max = num[0];

    for(int i = 0; i < size; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    std::cout << "Maximum value is: " << max << std::endl;

    ----------- and ----------- 

    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 9, 8, 14, 10};

    int min = num[0];

    for(int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    std::cout << "Minimum value is: " << min << std::endl;

    Q4.
    -------------------------------->
    
    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 9, 8, 14, 10};

    for(int i = 0; i < size; i++)
    {
        if(num[i] % 2 == 0)
        {
            std::cout << num[i] << " ";
        }
    }

    ----------- and -----------
    
    const int size = 10;
    int num[size] = {7, 2, 11, 4, 8, 6, 9, 8, 14, 10};

    for(int i = 0; i < size; i++)
    {
        if(num[i] % 2 == 1)
        {
            std::cout << num[i] << " ";
        }
    }

    */

    const int size = 10;
    int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp; 

    std::cout << "Original array: ";
    for(int n : num) 
    {
        std::cout << n << " ";
    }
    std::cout << "\n";

    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }

    std::cout << "Reversed array: ";
    for(int n : num) 
    {
        std::cout << n << " ";
    }
    std::cout << "\n";
    

    return 0;
}