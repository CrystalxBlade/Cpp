#include <iostream>
#include <algorithm>
#include <vector>

 /*
int main()
{
   

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

                                //   sorting but using the first element of each pair

    std::vector<std::pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5, 2}};

    std::sort(vec.begin(), vec.end());

    for(auto p : vec)
    {
        std::cout << p.first << " " << p.second << '\n';
    }


    --------------------------------------------
                                //  Custom comparator
     */

     bool comparator(std::pair<int, int> p1, std::pair<int, int> p2)
    {
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return true;
        else return false;
    }

    int main()
{

    std::vector<std::pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5, 2}};

    std::sort(vec.begin(), vec.end(), comparator);

    for(auto p : vec)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    return 0;
}