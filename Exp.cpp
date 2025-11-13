#include <iostream>


int main()
{
    int arr[] = {6, 12, 29, 77, 56, 6, 29, 56, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};

    std::cout << "Frequency of each element \n";

    for(int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
                visited[j] = true;
            }
        }
        
        std::cout << arr[i] << " - " << count << " times \n";
    }

    return 0;
}

