#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {4, 2, 8, 6};
    vec.insert(vec.begin(), 5);
    for(int i : vec)
    {
        std::cout << i << " ";
    }
    return 0;
}