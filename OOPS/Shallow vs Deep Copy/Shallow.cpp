#include <iostream>

class Blade
{
public:

    int* hp;

    Blade(int value)
    {
        hp = new int(value);
    }

        // ❌ No copy constructor → shallow copy

    ~Blade()
    {
        delete hp;
        std::cout << "Destructor called ";
    }

};

int main()
{
    Blade a(100);
    Blade b = a;   // Shallow Copy 

    std::cout << "a.hp = " << *a.hp << '\n';
    std::cout << "b.hp = " << *b.hp << '\n';

    return 0;   // 💥 double delete happens here
}