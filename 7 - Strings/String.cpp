#include <iostream>

int main()
{
    std::string name;
    std::string last = "Blade";
    std::cin >> name;
    std::getline(std::cin, name);
    std::cout << name;
    
    return 0;
}