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

    int num[10] = {8, 2, 5, 9, 23, 47, 36, 11, 51, 82};

    int odd = 0, even = 0;

    for(int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            even++;
        }
        else if (num[i] % 2 == 1)
        {
            odd++;   
        }
    }

    std::cout << "Even: " << even << std::endl;
    std::cout << "Odd: " << odd;

    */

    int num[5] = {6, 7, 8, 9, 10};

    int start = 0;
    int end = 4;

    while (start < end)
    {
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp; 

        start++;
        end--;
    }

    std::cout << "Reversed array: ";

    for (int i = 0; i < 5; i++)
    {
        std::cout << num[i] << " ";
    }
    
    return 0;
}