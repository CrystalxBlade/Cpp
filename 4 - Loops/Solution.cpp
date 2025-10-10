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

    Q7.
    -------------------------------->

    int temp = 0, num = 7;

    for(int i = 2; i <= num-1; i++)
    {
        if (num % i == 0)
        {
            temp++;
        }
    }
    if (temp > 0)
    {
        std::cout << num << " is not prime number " << std::endl;
    }
    else
    {
        std::cout << num << " is a prime number " << std::endl;
    }

    Q8.
    -------------------------------->
   
    int num = 100, temp = 0;

    for(int i = 2; i <= num; i++)
    {
        for(int j = 2; j <= i - 1; j++)
        {
            if(i % j == 0)
            {
                temp++;
            }
        }
        if (temp == 0)
        {
            std::cout << i << std::endl;
        }
        else
        {
            temp = 0;
        }
    }

    Q9.
    -------------------------------->

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            std::cout << i << " ";
        }
    }

    Q10.
    -------------------------------->

    int a = 28, b = 42;

    for(int i = a; i >= 1; i--)
    {
        if (a % i == 0  && b % i == 0)
        {
            std::cout << "GCD/HCF is: " << i;
            break;
        }
        
    }

    ----------------  LCM ----------------

    int a = 28, b = 42, c;

    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    
    for(int i = c; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            std::cout << "LCM is:  " << i;
            break;
        }
    }

    Q11.
    -------------------------------->

    int result = 1, base, exp, temp;

    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exp: ";
    std::cin >> exp;

    temp = exp;

    while (exp != 0)
    {
        result = result * base;
        exp--;
    }

    std::cout << base << " ^ " << temp <<" = " <<  result; 
    */
   
    return 0;
} 