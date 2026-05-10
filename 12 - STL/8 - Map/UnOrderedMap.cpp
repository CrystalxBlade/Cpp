#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> m;

    /*                                            ------- it'll only print one key ❌ 

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    for(auto p : m)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    */

    //                                             -------- different keys ✅ 
    m.emplace("tv", 120);
    m.emplace("watch", 100);
    m.emplace("laptop", 100);
    m.emplace("ipad", 100);

    for(auto p : m)
    {
        std::cout << p.first << " " << p.second << '\n';
    }


    return 0;
}