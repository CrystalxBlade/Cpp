#include <iostream>

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

    Switch(today)
    {
        case Monday:
        std::cout << "Start of the weeknd";
        break;
    }

    return 0;
    
}