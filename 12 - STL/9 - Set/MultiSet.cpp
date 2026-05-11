#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> u;

    u.emplace(2);
    u.emplace(4);
    u.emplace(6);
    u.emplace(8);
    u.emplace(10);

    for(auto s : u)
    {
        std::cout << s << " ";
    }

    return 0;
}