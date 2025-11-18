#include <iostream>

/*

int main()
{

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

    Q12.
    -------------------------------->
    
    int num = 153, rem, temp, sum = 0;

    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == sum)
    {
        std::cout << "Armstrong Number: " << sum << std::endl;
    }
    else
    {
        std::cout << "Not a Armstrong Number: " << sum << std::endl;
    }

    Q13.
    -------------------------------->

    int rem;
    
    for(int i = 1; i <= 1000; i++) 
    {
        int num = i, sum = 0, check_num = i; 

        while (check_num > 0) 
        {
            rem = check_num % 10;
            sum = sum + (rem * rem * rem); 
            check_num = check_num / 10;
        }

        if (num == sum) 
        {
            std::cout << num << std::endl;
        }
    }

    Q14.
    -------------------------------->

    int n = 145, fact = 1, res = 0, rem = 0, q = n;

    while (q != 0)
    {
        rem = q % 10;
        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        res = res + fact;
        fact = 1;
        q = q/10;
    }
    
    if (n == res)
    {
        std::cout << res <<" is strong number ";
    }
    else
    {
        std::cout << res << " not a strong number";
    }
    
    return 0;
} 

 */

 int prime(int n)
 {
    for(int i = 2; i * i<= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
 }
 int main()
 {
    int n1 = 2, n2 = 40;

    for(int i = n1; i <= n2; i++)
    {
        if (prime(i))
        {
            std::cout << i << "\n";
        }
    }

    return 0;
 }