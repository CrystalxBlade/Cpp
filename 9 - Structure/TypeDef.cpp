#include <iostream>

typedef struct employee
{
    int id;;
    std::string name;
    double salary;
} ep;

int main()
{
    ep emp1;
    emp1.id = 4;
    emp1.name = "Spongebob";
    emp1.salary = 60.5;

    ep emp2;
    emp2.id = 5;
    emp2.name = "Patrick";
    emp2.salary = 4.57;

    std::cout << emp1.id << "\n";
    std::cout << emp1.name << "\n";
    std::cout << emp1.salary << "\n";

    std::cout << emp2.id << "\n";
    std::cout << emp2.name << "\n";
    std::cout << emp2.salary;
    
    return 0;
}