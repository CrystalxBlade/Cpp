#include <iostream>

class Animal
{
    public:
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