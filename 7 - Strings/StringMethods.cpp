#include <iostream>

int main()
{
    std::string s = "Crystal x Blade";

    // length / size

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Length: " << s.length() << std::endl;

     // accessing characters

    std::cout << "Front: " << s.front() << std::endl;
    std::cout << "Back: " << s.back() << std::endl;

    return 0;
}