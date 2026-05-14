#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    /*

    int arr[5] = {3, 5, 1, 8, 2};                      sort(arr, arr + n)

    std::sort(arr, arr + 5);

    for(int val : arr)
    {
        std::cout << val << " ";
    }

    --------------------------------------------

    std::vector<int> vec = {3, 5, 1, 8, 2};            sort(vec.begin(), vec.end())

    std::sort(vec.begin(), vec.end());

    for(int val: vec)
    {
        std::cout << val << " ";
    }

    --------------------------------------------

    std::vector<int> vec = {3, 5, 1, 8, 2};              descending order 

    std::sort(vec.begin(), vec.end(), std::greater<int>());

    for(int val : vec)
    {
        std::cout << val << " ";
    }

    --------------------------------------------

    */

    std::vector<std::pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5, 2}};

    std::sort(vec.begin(), vec.end());

    for(auto p : vec)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    return 0;
}