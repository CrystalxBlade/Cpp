#include <iostream>


/*
int main()
{
    int arr[] = {5, 2, 5, 2, 4, 1, 1, 1,};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};

    for(int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                visited[j] = true;
            }
        }

        std::cout << arr[i] << " - " << count << " Times \n";
    }

    return 0;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for(int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
        
    }

    int newSize = j + 1;

    for(int i = 0; i < newSize; i++)
    {
        std::cout << arr[i] << " ";
    }


    return 0;
}

int main()
{
    int x = 5;
    int* y = &x;
    int** z = &y;

    std::cout << "x add :" << &x << "\n";
    std::cout << "y add :" << &y << "\n";

    std::cout << y << "\n";
    std::cout << **z;

    return 0;
}

*/

int main()
{
    int *p = new int(10);

    int *a = new int[10]; 
}