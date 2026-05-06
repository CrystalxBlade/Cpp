#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> m;

    /*
                                           print value of a key
    m["laptop"] = 100;
    std::cout << m["laptop"];

    ----------------------------------------

                                          count the keys
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    std::cout << "count: " << m.count("laptop");

    ----------------------------------------

                                          print all keys with values
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    for(auto p: m)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    std::cout << "count: " << m.count("laptop");

    ----------------------------------------

                                          insert & emplace
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 50});

    m.emplace("mobile", 100);

    for(auto p: m)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    ----------------------------------------

                                        erase

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.erase("headphones");

    for(auto p: m)
    {
        std::cout << p.first << " " << p.second << '\n';
    } 
        
    */

    return 0;
}