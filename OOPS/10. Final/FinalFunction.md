# 1. final on a function (prevents overriding)
```
#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal sound\n";
    }
};

class Dog : public Animal
{
public:
    void speak() final
    {
        std::cout << "Dog barks\n";
    }
};

class Bulldog : public Dog
{
public:
    void speak() override   // ❌ ERROR
    {
        std::cout << "Bulldog bark\n";
    }
};
```
### Why error?

### Because:
```
Dog::speak() is marked final
→ No derived class can override it
```
### Think of it like locking the method 🔒.