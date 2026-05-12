#include <iostream>
#include <set>

int main()
{
    std::multiset<int> m;

    m.insert(8);
    m.insert(2);
    m.insert(4);
    m.insert(6);

    m.insert(2);
    m.insert(4);
    m.insert(6);

    for(auto i : m)
    {
        std::cout << i << " ";
    }

    return 0;
}