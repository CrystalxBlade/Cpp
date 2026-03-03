#include <iostream>

class Person
{
    public:
    void breathe()
    {
        std::cout << "Person is breathing \n";
    }
};
class Student : public Person
{
    public:
    void Study()
    {
        std::cout << "Student is studying \n";
    }
};
class Employee : public Person
{
    public:
    void Work()
    {
        std::cout << "Employee is working \n";
    }
};
class Intern : public Student, public Employee
{
    public:
    void Learn()
    {
        std::cout << "Intern is learning from both worlds \n";
    }
};

int main()
{
    Intern i;

    i.Study();
    i.Work();
    i.Learn();

  //  i.breathe(); ❌ This would cause ambiguity!

    return 0;
}