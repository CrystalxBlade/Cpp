#include <iostream>

int main()
{
    std::string s = "Crystal x Blade";

    // length / size

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Length: " << s.length() << std::endl;

    std::cout << "\n";

    // accessing characters

    std::cout << "Front: " << s.front() << std::endl;
    std::cout << "Back: " << s.back() << std::endl;

    std::cout << "\n";

    // indexing / at

    std::cout << "at(4): " << s.at(5) << std::endl;
    std::cout << "s[4]: " << s[4] << std::endl;

    std::cout << "\n";
    
    // push_back, pop_back

    s.push_back('!');
    std::cout << "After push_back: " << s << std::endl;

    s.pop_back();
    std::cout << "After pop_back: " << s << std::endl;

    
    return 0;
}