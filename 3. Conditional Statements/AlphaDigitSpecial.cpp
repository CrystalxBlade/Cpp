#include <iostream>
#include <cctype>

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::isalpha(ch))
    {
        std::cout << ch << " is a Alphabet" << std::endl;
    }
    else if (std::isdigit(ch))
    {
        std::cout << ch << " is a Digit" << std::endl;
    }
    else
    {
        std::cout << ch << " @is a Special Character" << std::endl;
    }

    return 0;
}