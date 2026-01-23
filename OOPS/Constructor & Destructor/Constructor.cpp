#include <iostream>

class Crystal
{
    public:
    int mana;

    Crystal()
    {
        mana = 20;
        std::cout << "Default constructor called mana : ";
    }
};

int main()
{
    Crystal c;
    std::cout << c.mana << '\n';

    return 0;
}