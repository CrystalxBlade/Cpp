#include <iostream>

int main()
{
    

    char ch;
    std::cout << "Enter an alphabet: ";
    std::cin >> ch;

    /*

    ------------------- Lower Case ---------------------
    
    if (ch >= 'A' && ch <= 'Z')    
    {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << "It is a Vowel.\n";
    } else if (ch >= 'a' && ch <= 'z') {
        std::cout << "It is a Consonant.\n";
    } else {
        std::cout << "Not a valid alphabet.\n";
    }

    ------------------- Upper Case ---------------------

    if(ch >= 'a' && ch <= 'z')    // ToUpper
    {
        ch = ch - 32;
    }

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        std::cout << "It is a Vowel.\n";
    } else if (ch >= 'a' && ch <= 'z') {
        std::cout << "It is a Consonant.\n";
    } else {
        std::cout << "Not a valid alphabet.\n";
    }

    */

    return 0;
}