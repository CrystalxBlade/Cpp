#include <iostream>

class Student
{
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
    return 0;
}