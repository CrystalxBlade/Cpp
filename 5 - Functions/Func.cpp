#include <iostream>

void Func()
{
    std::cout << "1. Non Parameterized without Return type\n";
}

std::string FuncR()
{
    return "2. Non Parameterized with Return type";
}

void FuncP(int a, int b)
{
    std::cout << "3. Parameterized without Return type: Sum is " << a + b << "\n";
}

int FuncPR(int a, int b)
{
    return a + b;
}

int main()
{
    Func();
    
    std::string resultR = FuncR();
    std::cout << resultR << "\n";
    
    FuncP(2, 4);
    
    std::cout << "4. Parameterized with Return type: Returned value is " << FuncPR(4, 6) << "\n";
    
    return 0;
}