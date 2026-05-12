#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> u;

    u.insert(2);
    u.insert(4);
    u.insert(6);
    u.insert(8);
    u.insert(10);

    for(auto s : u)
    {
        std::cout << s << " ";
    }

    return 0;
}