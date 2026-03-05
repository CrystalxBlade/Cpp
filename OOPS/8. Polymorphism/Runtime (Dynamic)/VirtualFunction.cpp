#include <iostream>

class Animal
{
    public:
    void speak()
    {
        std::cout << "Animal make a sound \n";
    }
};
class Dog : public Animal
{
    public:
    void speak()
    {
        std::cout << "Dog barks \n";
    }
};

int main()
{
    return 0;
}