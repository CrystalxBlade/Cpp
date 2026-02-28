#include <iostream>

class Vehicle
{
    public:
    void Start()
    {
        std::cout << "Engine  \n";
    }
};

class Car : public Vehicle
{
    public:
    void Drive()
    {
        std::cout << "Driving Car";
    }
};

int main()
{
    Car c;
    c.Start();             // Inherited Function
    c.Drive();           //  Own Function

    return 0;
}