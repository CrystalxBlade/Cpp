#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student stud1;
    stud1.name = "Spongebob";
    stud1.gpa = 6.2;
    stud1.enrolled = true;

    student stud2;
    stud2.name = "Patrick";
    stud2.gpa = 5.7;
    stud2.enrolled = false;

    std::cout << stud1.name << "\n";
    std::cout << stud1.gpa << "\n";
    std::cout << stud1.enrolled << "\n";

    std::cout << stud1.name << "\n";
    std::cout << stud1.gpa << "\n";
    std::cout << stud1.enrolled << "\n";

    return 0;
}