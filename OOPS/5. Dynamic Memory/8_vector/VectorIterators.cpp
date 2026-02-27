#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 20, 30, 40};

    std::vector<int>::iterator it;

    for(it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }

    return 0;
}