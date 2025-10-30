#include <iostream>


/*

int Sum(int num)
{
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}

int main()
{
    std::cout << "Sum of all digits is: " << Sum(145) << std::endl;
    return 0;
}

*/

void countDown(int n)
{
    if(n == 0)
    {
        std::cout << "Booooooooooom" << std::endl;
        return;
    }

    std::cout << "tick tick - " << n << "\n";

    countDown(n - 1);  
}

int main()
{
    countDown(10);
    return 0;
}