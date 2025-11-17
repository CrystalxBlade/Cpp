#include <iostream>

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

    Q5.
    -------------------------------->

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

    Q6.
    -------------------------------->

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

    Q7.
    -------------------------------->

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

    Q8.
    -------------------------------->

    const int size = 10;
    int num[size] = {12, 65, 88, 27, 51, 38, 69, 45, 74, 96};
    int x = 69;
    int index = -1;
    bool flag = false;

    for(int i = 0; i < size; i++)
    {
        if (num[i] == x)
        {
            flag = true;
            index = i;
            break;
        }
    }
    if (flag == true)
    {
        std::cout << "Value found " << x << " at index: " << index;
    }
    else
    {
        std::cout << "Value not found ";
    }

    Q9.
    -------------------------------->

    const int size = 10;
    int num[size] = {12, 65, 8, 27, 51, 38, 69, 8, 74, 8};
    
    int x = 8, count = 0;

    for(int i = 0; i < size; i++)
    {
        if(num[i] == x)
        {
            count++;
        }
    }

    std::cout << "The element " << x << " appears " << count << " times." << std::endl;
    return 0;

    Q10.
    -------------------------------->

    const int size = 10;
    int num[size] = {2, 5, -3, 8, -12, 37, 69, -57, 45, -9};

    for(int i = 0; i < size; i++)
    {
        if(num[i] < 0)
        {
            num[i] = 0;
        }
    }
    for(int i : num)
    {
        std::cout << i << " ";
    }

    Q11.
    -------------------------------->

   //  Bubble Sort

int main()
{

    int arr[] = {5, 1, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}    

    //  Selection Sort

void selection(int arr[], int n)
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


    selection(arr, n);
    for(int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}

   // Insertion Sort

void InsertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);
    
    for(int i : arr)
    {
        std::cout << i << " ";
    }
    return 0;
}

    Q12.
    -------------------------------->
    
   //  Second largest

int main()
{
    int arr[] = {12, 3, 5, 11, 4};
    int n =  sizeof(arr) / sizeof(arr[0]);

    int la, sl;

    if (arr[0] > arr[1])
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
        if (la < arr[i])
        {
            la = arr[i];
        }
        else if (la > arr[i] && sl < arr[i])
        {
            sl = arr[i];
        }
    }

    std::cout << "Largest: " << la <<" \n" "Second largest: " << sl;
    return 0;
}

   // Second smallest

int main()
{
    int arr[] = {5, 2, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int s, sm;

    if (arr[0] < arr[1])
    {
        s = arr[0];
        sm = arr[1];
    }
    else
    {
        s =  arr[1];
        sm = arr[0];
    }

    for(int i = 2; i < n; i++)
    {
        if (s > arr[i])
        {
            sm = s;
            s = arr[i];
        }
        else if (sm > arr[i] && sm != arr[i])
        {
            sm = arr[i];
        }
    }

    std::cout << "Smallest: " << s << "\n" "Second smallest: " << sm; 
    
    return 0;
}

    Q13.
    -------------------------------->

int main()
{
    int arr[] = {4, 12, 29, 4, 6, 29, 4};
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
        
        std::cout << arr[i] << " - " << count << " times \n"; 
    }

    return 0;
}

    Q14.
    -------------------------------->

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 4, 4, 5};
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

*/

int main()
{
    int A[] = {1, 2, 3};
    int B[] = {4, 5, 6};

    int n1 = sizeof(A) /  sizeof(A[0]);
    int n2 = sizeof(B) /  sizeof(B[0]);

    int C[n1 + n2];

    for(int i = 0; i < n1; i++)
    {
        C[i] = A[i];
    }
}
