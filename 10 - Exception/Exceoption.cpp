#include <iostream>

int main()
{
    try
    {
        int a = 10, b = 0;
        if(b == 0)
        {
            throw "Connot divide by zero";
        } 
        std::cout << a / b;
    }
    catch(const char* msg)
    {
        std::cout << "Error: " << msg;
    }
    return 0;
}