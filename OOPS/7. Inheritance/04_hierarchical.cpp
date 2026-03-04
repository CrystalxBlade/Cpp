#include <iostream>

class Vehicle
{
    public:
    void start()
    {
        std::cout << "Vehicle started \n";
    }
};
class Car : public Vehicle
{
    public:
    void drive()
    {
        std::cout << "Driving Car \n";
    }
};
class Bike : public Vehicle
{
    public:
    void ride()
    {
        std::cout << "Riding Bike \n";
    }
};

int main()
{
    Car c;
    c.start();                       // from vehicle
    c.drive();                       // Own function

    Bike b;
    b.start();                       // from vehicle
    b.ride();                        // Own function

    return 0;
}