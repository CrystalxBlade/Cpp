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

void Select(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int sm = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[sm])
            {
                sm = j; 
            }
        }
        std::swap(arr[i], arr[sm]);
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    Select(arr, n);
    for(int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}


void bubble(int arr[], int n);

int main()
{
    int arr[] = {5, 2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, n);
    for(int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}

void bubble(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int sm = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[sm])
            {
                sm = j;
            }
        }
        std::swap(arr[i], arr[sm]);
    }
}


int main()
{
    int arr[] = {1, 3, 4, 5, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    int la, sl;

    if(arr[0] > arr[1])
    {
        la = arr[0];
        sl = arr[1];
    }
    else
    {
        la = arr[1];
        sl = arr[0];
    }

    for(int i = 2; i < n; i++)
    {
        if (arr[i] > la)
        {
            sl =  la;
            la = arr[i];
        }
        else if (arr[i] < la && arr[i] > sl)
        {
            sl = arr[i];
        }
    }

    std::cout << "Largest: " << la << "\n" << "Smallest: " << sl;
    return 0;
}



int main()
{
    int matrix [3][3];

    int m = 3;
    int n = 3;


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
        std::cout << "\n";
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void printMatrix(int matrix[][3], int m, int n, int key)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (matrix[i][j] == key)
            {
                std::cout << "found " << key << " at (" << i << " , " <<  j << ")\n";
            }
        }
    }
}

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = 3, n = 3, key = 6;

    printMatrix(matrix, m, n, key);
}



int main()
{
    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
    
            std::cout << matrix [i][j] <<" ";
        }
        std::cout << "\n";
    }

    std::cout <<"\n ";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i == j)
            {
                std::cout << matrix [i][j] <<" ";
            }   
        }
    }

    return 0;
}

*/

int main()
{
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // Print matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] <<" ";
        }
        std::cout << "\n";
    }

    std::cout << "\nMain diagonal: ";

    for(int i = 0; i < m; i++)
    {
        std::cout << matrix[i][i] << " ";
    }

    return 0;
}
