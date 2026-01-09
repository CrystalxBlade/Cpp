#include <iostream>

// Enum represents a fixed set of related values

enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Day today = Friday;

    switch(today)
    {
        case Monday:
        std::cout << "Start of the weeknd";
        break;
        
        case Friday:
        std::cout << "Almost of the weeknd";
        break;

        case Sunday:
        std::cout << "Holiday";
        break;

        default:
        std::cout << " Regular day";
    }

    return 0;
    
}