#include <iostream>

class Student
{
    public:
    // non-static (each student has their own roll number)
    int roll;
    // static (shared by all students)
    static int totaSudents;

    Student(int r)
    {
        roll = r;
        totaSudents++; 
    }
};

int Student::totaSudents = 0; 

int main()
{
    Student s1(4);
    Student s2(5);

    std::cout << "Roll of s1: " << s1.roll << '\n';
    std::cout << "Roll of s2: " << s2.roll << '\n';


    return 0;
}