#include <iostream>
#include <set>

int main()
{
    std::set<int> s;

    s.insert(4);
    s.insert(2);
    s.insert(8);
    s.insert(6);

    for(auto val : s)
    {
        std::cout << val << '\n';
    }

    return 0;
}