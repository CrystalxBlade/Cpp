#include <iostream>

int main()
{
    /*
    int num = 50;

    do
    {
        std::cout << num << std::endl;
        num++;
    } while (num < 10);
    */

    int num, ans = 5;
    std::cout << "Guess a number: ";
    std::cin >> num; 

    if (num != ans)
    {
        do
        {
            std::cout << "Try again: ";
            std::cin >> num;

        } while (num != ans);
        
        std::cout << "Correct" << std::endl;
    }
    else
    {
        std::cout << "Correct" << std::endl;
    }
    
    return 0;
}