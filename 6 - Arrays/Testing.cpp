#include <iostream>

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

    
    double nums[] = {5,1,7,9,2};

    std::cout << sizeof(nums)/ sizeof(double) << std::endl;

    int num [8], x = 6;

    for (int i = 0; i < 8; i++)
    {
        std::cin >> num[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        if (num[i] == x)
        {
            std::cout << "x value is here: " << i << " ";
            break;
        }
    }

    int num[5] = {6, 7, 8, 9, 10};

    int start = 0, end = 4;

    while(start < end)
    {
        int temp = num[start]; // temp 6   // temp 7  // 
        num[start] = num[end]; // start 10 // temp 9
        num[end] = temp;       // end 6   // end 7

        start++; // 1 // 2 
        end--;  //3  // 2
    }

    for(int i = 0; i < 5; i++)
    {
        std::cout << num[i] << " ";
    }

    int num[5] = {2, 4, 6, 8, 10};

    int arr[5];

    for(int i = 0; i < 5; i++)
    {
       arr[i] = num[i];
    }

    for(int i : arr)
    {
        std::cout << i << " ";
    }
    
    const int size = 5;
    int num[size] = {2, 4, 6, 8, 10};

    int i = 0;
    float sum = 0.0f; 
    while (i < size)
    {
        sum += num[i];
        i++;
    }

    float average = sum / size;
    std::cout << "The average is: " << average << std::endl;

    */

void sort(int arr[], int size);

int main()
{
    int arr[] = {10, 2, 9, 3, 7, 4, 6, 5, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    for(int element : arr)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int arr[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}