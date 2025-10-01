#include <iostream>

int main()
{
    /*

    Q1.
    -------------------------------->
    
    int num;
    std::cout << "Enter num: "; 
    std::cin >> num;
    if (num % 2 == 0)
    {
        std::cout << "Even";
    }
    else
    {
        std::cout << "Odd";
    }
        
    Q2.
    -------------------------------->

    int num = 4;
    if (num < 0)
    {
        std::cout << "Negative";
    }
    else if(num == 0)
    {
        std::cout << "Zero";
    }
    else
    {
        std::cout << "Positive";
    }

    Q3.
    -------------------------------->

    int a = 4, b = 6;

    if (a > b)
    {
        std::cout << "a is largest = " << a <<"\n";
    }
    else
    {
        std::cout << "b is largest = " << b << "\n";
    }

    Q4.
    -------------------------------->

    int a = 4, b = 6, c = 8;

    if (a > b && a > c )
    {
        std::cout << "A is greater = " << a << "\n";
    }
    else if (b > a && b > c)
    {
        std::cout << "B is greater = " << b << "\n";
    }
    else
    {
        std::cout << "C is greater = " << c << "\n";
    }

    Q5.
    -------------------------------->

    int year;
    std::cout << "Enter Year: ";
    std::cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        std::cout << "It's a Leap Year " << std::endl;
    }
    else 
    {
        std::cout << "Not a Leap Year " << std::endl;
    }

    */
    
    char ch = 'I';
    char val = std::tolower(ch);
    std::cout<<" Character : " << val; 
    
    /*
    if ((ch = 'A')|| (ch = 'E')||(ch = 'I')||(ch = 'O')||(ch = 'U'))
    {
        
    }
    */
    
    return 0;
    
}