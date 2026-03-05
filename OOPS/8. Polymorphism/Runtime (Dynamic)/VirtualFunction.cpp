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

    ptr = &d;
    ptr->speak();
    
    return 0;
}

*/