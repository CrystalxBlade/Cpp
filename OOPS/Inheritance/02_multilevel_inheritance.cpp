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
class ElectricCar : public Car
{
    private:
    int battery;

    public:
    ElectricCar(int s, int w, int b) : Car(s,w)
    {
        battery  = b;
        std::cout << "ElectricCar Constructor \n";
    }

    void charge()
    {
        std::cout << "Battery Level : " << battery << "% \n";
    }
};

int main()
{
    ElectricCar tesla(100, 4, 80);

    tesla.move();
    tesla.honk();
    tesla.charge();
}