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

    return 0;
}