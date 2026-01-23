#include <iostream>

/*

class Crystal
{
    public:
    int mana;

    Crystal()                         // default constructor
    {
        mana = 20;
        std::cout << "Default constructor called mana : ";
    }
};

int main()
{
    Crystal c;                       // automatically calls default constructor
    std::cout << c.mana << '\n';

    return 0;
}

*/

class Crystal
{
    public:

    int mana;

    Crystal(int m)
    {
        mana = m;
        std::cout << "Parameterized constructor '\n'";
    }

};

int main()
{
    
    return 0;
}