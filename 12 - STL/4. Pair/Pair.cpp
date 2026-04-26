#include <iostream>
#include <vector>

int main()
{
    /*

    std::pair<int, std::string> p = {4,"Blade"};
     
    std::cout << p.first << '\n';                 // 4
    std::cout << p.second;                        // "Blade"
    

    std::pair<int, std::pair<char, int>> p = {5, {'Z',8}};

    std::cout << p.first << '\n';               // 4
    std::cout << p.second.first << '\n';        // Z
    std::cout << p.second.second;               // 8

    */


    std::vector<std::pair<int,int>> vec = {{2, 4}, {6,8}, {10, 12}};

    for(std::pair<int,int> p : vec)
    {
        std::cout << p.first << " " << p.second << " " << '\n';
    }
    return 0;
}