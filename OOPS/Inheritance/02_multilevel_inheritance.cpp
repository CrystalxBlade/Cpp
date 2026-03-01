#include <iostream>

class Vehicle
{
    protected: 
    int speed;

    public:
    Vehicle(int s)
    {
        speed = s;
        std::cout << "Vehicle constructor \n";
    }

    void move()
    {
        std::cout << "Vehicle moving at " << speed << " km/h \n";
    }
};
class Car : public Vehicle
{
    protected:
    int wheels;

    public:
    Car(int s, int w) : Vehicle(s)
    {
        wheels = w;
        std::cout << "Car constructor \n";
    }

    void honk()
    {
        std::cout << "Car honking \n";
    }
};
class ElectricCar : Car
{
    
};

int main()
{

}