#include <iostream>

class Calculator
{
public:

    // 1️⃣ Different number
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // 2️⃣ Different type
    double add(double a, double b)
    {
        return a + b;
    }

    // 3️⃣ Same number, different order
    void show(int a, double b)
    {
        std::cout << "Int-Double version\n";
    }

    void show(double a, int b)
    {
        std::cout << "Double-Int version\n";
    }
};

int main()
{
    Calculator c;
    c.add(2,8);
    c.add(2, 4, 6);
    c.add(2.4, 6.2);
    c.show(2, 6.4);
    c.show(6.2, 4);
}