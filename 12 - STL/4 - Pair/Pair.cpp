#include <iostream>
#include <vector>

int main()
{
    /*

    std::pair<int, std::string> p = {4,"Blade"};
     
    std::cout << p.first << '\n';                 // 4
    std::cout << p.second;                        // "Blade"
    

    -----------------------------------------------------

    std::pair<int, std::pair<char, int>> p = {5, {'Z',8}};

    std::cout << p.first << '\n';               // 4
    std::cout << p.second.first << '\n';        // Z
    std::cout << p.second.second;               // 8


    ------------------------------------------------------

    std::vector<std::pair<int,int>> vec = {{2, 4}, {6,8}, {10, 12}};

    for(std::pair<int,int> p : vec)
    {
        std::cout << p.first << " " << p.second << " " << '\n';
    }

    -------------------------------------------------------

    std::vector<std::pair<int,int>> vec;
    vec.push_back({5,2});
    vec.push_back({3,7});

    for(std::pair<int, int> p : vec)
    {
        std::cout << p.first << " " << p.second << '\n';
    }

    -------------------------------------------------------

    
   std::vector<std::pair<int, int>> vec;

   vec.emplace_back(6,9);
   vec.emplace_back(7,2);

   for(auto p : vec)
   {
       std::cout << p.first << " " << p.second << '\n'; 
   }
       Note* While using emplace we don't need to put these {{2,5}} brackets like push_back we can
       write {5,2} becuz it makes pairs for us automatically 
   */

    return 0;
}