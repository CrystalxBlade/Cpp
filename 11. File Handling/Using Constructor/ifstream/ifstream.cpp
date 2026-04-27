#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file("data.txt");

    std::string txt;
    
    while (file >> txt)
    {
        std::cout << txt << " ";
    }
    
    file.close();

    return 0;
}