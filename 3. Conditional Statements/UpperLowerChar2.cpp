#include <iostream>
#include <cctype>

int main()
{
    

    char ch;
    std::cout << "Enter an alphabet: ";
    std::cin >> ch;

    /*
    char low = std::tolower(ch);

    if (!std::isalpha(ch))
    {
        std::cout << "Nota a valid alphabet \n";
    }
    else if(low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u')             
   {
        std::cout << "It is a Vowel.\n";
    }
    else
    {
        std::cout << "It is a Consonant.\n";
    }
    */

    char low = std::toupper(ch);

    if (!std::isalpha(ch))
    {
        std::cout << "Nota a valid alphabet \n";
    }
    else if(low == 'A' || low == 'E' || low == 'I' || low == 'O' || low == 'U')             
   {
        std::cout << "It is a Vowel.\n";
    }
    else
    {
        std::cout << "It is a Consonant.\n";
    }
    
    return 0;
}