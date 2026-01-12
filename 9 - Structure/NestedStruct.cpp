#include <iostream>

struct Address
{
    int house_no;
    std::string street_name;
};

struct Student
{
    std::string name;
    int roll_no;
    Address add;
};


int main()
{
    Student stud;
    stud.name = "Blade";
    stud.roll_no = 69;
    stud.add.house_no

    return 0;
}