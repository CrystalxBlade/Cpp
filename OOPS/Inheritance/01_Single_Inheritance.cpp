#include <iostream>

class Animal
{
    public:
    Animal()
    {
        std::cout << "Animal Constructors";
    }

    void run()
    {
        std::cout << " Running ";
    }
};

class Dog : public Animal
{
    public:
    void walk()
    {
        std::cout << "Dog is walking";
    }
};

int main()
{
    Dog d;
    d.run();             // Inherited Function
    d.walk();           //  Own Function

    return 0;
}