#include <iostream>

/*
void DisplayNum(int a)    // Pass By Value 
{
    a = 100;
}
*/

void DisplayNum(int &a)   // Pass By Reference 
{
    a = 100;
}

int main()
{
    int a = 10;
    DisplayNum(a);
    std::cout << a;
    
    return 0;
}