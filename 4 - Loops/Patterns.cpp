#include <iostream>

int main()
{

    /*

    int n = 4;

    for(int i = 0; i < n; i++)
    {
        char ch = 'A';

        for(int j = 0; j < n; j++)
        {
            std::cout << ch << " ";
            ch = ch + 1;
        }
        std::cout << "\n";
    }

          Square 

    int n = 4, num = 1;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << num << " ";
            num++;
        }
        std::cout << "\n"; 
    }

          Triangle

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    } 

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << i << " "; 
        }
        std::cout << "\n";
    }

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << j  << " ";
        }
        std::cout << "\n";
    }

        Rverse Triangle

    for(int i = 1; i <= 4; i++)
    {
        for(int j = i; j > 0; j--)
        {
            std::cout << j << " "; 
        }
        std::cout << "\n";
    }

       Floyd's Triangle
    
    int num = 0;
    
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            num++;
            std::cout << num << " ";
        }
        std::cout << "\n";

        Inverted Triangle
    }

    */

    for(int i = 1; i <=4; i++)
    {
        for(int k = 1; k < i; k++)
        {
            std::cout << " ";
        }
        for(int j = 4; j >= i; j--)
        {
            std::cout << i;
        }
        std::cout << "\n";
    }
}