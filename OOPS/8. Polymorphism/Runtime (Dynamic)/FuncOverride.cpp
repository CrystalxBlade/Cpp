#include <iostream>

class Animal
{
    public:
    void speak()
    {
        std::cout << "Animal make sound \n";
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
    Dog d;
    d.speak();

    return 0;
}