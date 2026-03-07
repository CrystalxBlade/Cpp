#include <iostream>

class Animal
{
    public:
    virtual void speak() = 0;   // pure virtual function 
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
    // Animal a; ❌ ERROR (abstract class)

    Dog d;
    d.speak();

    return 0;
}