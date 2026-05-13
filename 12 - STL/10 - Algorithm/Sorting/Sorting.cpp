#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    /*

    int arr[5] = {3, 5, 1, 8, 2};

    std::sort(arr, arr + 5);

    for(int val : arr)
    {
        std::cout << val << " ";
    }

    */

    std::vector<int> vec = {3, 5, 1, 8, 2};

    std::sort(vec.begin(), vec.end());

    for(int val: vec)
    {
        std::cout << val << " ";
    }

    return 0;
}