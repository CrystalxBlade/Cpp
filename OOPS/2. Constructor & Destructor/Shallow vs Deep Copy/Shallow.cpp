#include <iostream>

class Car
{
    public:

    int speed;
    int model;

    
    Car(){}

    Car(const Car& c)
    {
        speed = c.speed;
        model = c.model; 
    }

};

int main()
{
    Car BMW;

    BMW.speed = 200;
    BMW.model = 2002;
    
    
    return 0;
}