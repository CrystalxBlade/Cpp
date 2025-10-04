#include <iostream>

int main()
{
    /*
    int num = 1;
    
    while (num <= 10)
    {
        std::cout << num <<"\n";
        num++;
    }
    */

    int num, ans = 5; 
    std::cout << "Guess a value: ";
    std::cin >> num;

    while (num != ans)
    {
        std::cout << "Try again: ";
        std::cin >> num;
    }
     std::cout << "Correct";

    return 0;
}