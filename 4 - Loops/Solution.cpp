#include <iostream>

int main()
{
    
    /*

    Q1.
    -------------------------------->
    
    int num = 1234, rev = 0, rem;

    while (num > 0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }

    std::cout <<"Reverse num: " << rev << std::endl;
    
    Q2.
    -------------------------------->

    int num = 45067, count = 0;

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num > 0)
        {
           num = num/10;
           count++;
        }
        std::cout << "There are " << count << " digits " << std::endl;
    }

    Q3.
    -------------------------------->

    long fact = 1, num = 5;

    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    std::cout << "factorial of " << num << " is = " << fact << std::endl;

    Q4.
    -------------------------------->

    int num = 121, rev = 0, rem;
    int temp = num;
    while (num > 0)
    {
        rem = num%10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    if (temp == rev)
    {
        std::cout << "Palindrome number: " << rev << std::endl;
    }
    else
    {
        std::cout << "Not a Palindrome: " << rev << std::endl;
    }

    Q5.
    -------------------------------->

    int max = 0, num = 4621, rem;

    while (num > 0)
    {
        rem = num%10;
        
        if (rem > max)
        {
            max = rem;
        }
        num = num/10;
    }

    std::cout<<"Greatest value is: " << max << std::endl;

    Q6.
    -------------------------------->

    int a = 0, b = 1, c;

    for(int i = 0; i < 10; i++)
    {
        c = a + b;
        std::cout << a << "\n";
        a = b;
        b = c;
    }
        
    ----------------  OR  ----------------

    int a = 0, b = 1, c;

    std::cout << a << "\n";

    if (b <= 55)
    {
        std::cout << b << "\n";
    }

    while (b < 55)
    {
        c = a + b;
        
        if (c > 55)
        {
            break;
        }
        std::cout << c << "\n";

        a = b;
        b = c;
    }

    */

    return 0;
}