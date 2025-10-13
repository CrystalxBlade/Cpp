#include <iostream>

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