#include <iostream>

class Player
{
    public:
    std::string name;

    Player(std::string name)
    {
        this->name = name;
    }
};

int main()
{
    Player p("Blade"); 
    
    std::cout << "The name is : " << p.name << '\n';
    

    return 0;
}