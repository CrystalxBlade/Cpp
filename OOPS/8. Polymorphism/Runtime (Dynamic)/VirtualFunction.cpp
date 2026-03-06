#include <iostream>

                    // Without virtual function
/*
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
    Animal* ptr;
    Dog d;

    ptr = &d;                                       Output
    ptr->speak();                           //  Animal make a sound
    
    return 0;
}

*/

class Animal
{
    public:
    virtual void speak()
    {
        std::cout << "Animal make a sound \n";
    }
};
class Dog : public Animal
{
    public:
    void speak() override
    {
        std::cout << "Dog barks \n";
    }
};

int main()
{
    Animal* ptr;
    Dog d;

    ptr = &d;                                //   Output
    ptr->speak();                            // Dog barks

    return 0;
}