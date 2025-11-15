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

*/

