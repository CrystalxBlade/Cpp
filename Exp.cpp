#include <iostream>

void CountDown(int n)
{
    if(n == 0)
    {
        std::cout << " Booooooom ";
        return;
    }

    std::cout << "tick tick " << n <<std::endl;
    CountDown(n-1);
}

int main()
{

    int n;
    std::cout << "Enter a value to start countDown: ";
    std::cin >> n;

    CountDown(n);

    return 0;
}

