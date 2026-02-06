#include <iostream>

class Crystal
{
     public:
     int mana;

     Crystal(int m)
     {
        mana = m;
     }

     Crystal(const Crystal& p)
     {
        mana = p.mana;
        std::cout << "Copy constructor \n";
     }
};

int main()
{
    Crystal c(10);
    Crystal a = c;

    std::cout << c.mana << "\n";
    std::cout << a.mana;
    return 0;
}