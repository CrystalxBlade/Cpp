#include <iostream>

int main()
{
    std::string s = "Crystal x Blade";

    // length / size

    std::cout << "Size: " << s.size() << std::endl;
    std::cout << "Length: " << s.length() << std::endl;            // Returns the total number of characters

    std::cout << "\n";

    // accessing characters

    std::cout << "Front: " << s.front() << std::endl;             // Returns first character
    std::cout << "Back: " << s.back() << std::endl;               // Returns last character

    std::cout << "\n";

    // indexing / at

    std::cout << "at(4): " << s.at(5) << std::endl;                // Safe access: throws error if index is invalid
    std::cout << "s[4]: " << s[4] << std::endl;                    // Access character at index 4

    std::cout << "\n";
    
    // push_back, pop_back

    s.push_back('!');
    std::cout << "After push_back: " << s << std::endl;           // Adds a single character at the end

    s.pop_back();
    std::cout << "After pop_back: " << s << std::endl;            // Removes last character

    std::cout << "\n";

    // append

    s.append(" C++");
    std::cout << "After append: " << s << std::endl;              // Adds a string at the end
    
    std::cout << "\n";

    // substr

    std::cout << "substr(0, 5): " << s.substr(0,5) << std::endl;  // Returns substring from index 0 of length 5

    std::cout << "\n";
    
    // find
    
    std::cout << "Find Blade: " << s.find("Blade") << std::endl;  // Returns starting index of "Blade" inside the string
    std::cout << "Find a: " << s.find("a") << std::endl;
    
    std::cout << "\n";

    //erase

    s.erase(5);
    std::cout << "After erase (5): " << s << std::endl;       // Remove everything from index 5 to the end
    
    // erase(index, count)
    
    s.erase(3, 2);
    std::cout << "After erase (3, 2): " << s << std::endl;    // Starting at index 3, remove 2 characters.

    std::cout << "\n";

    // insert(position, text)

    s.insert(4, "_Add_");
    std::cout << "After insert: " << s << std::endl;

    // replace(position, count, text)

    s.replace(0, 5, "replaced");
    std::cout << s << std::endl;

    return 0;
}