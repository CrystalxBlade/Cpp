#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;

    for(auto p: m)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    return 0;
}