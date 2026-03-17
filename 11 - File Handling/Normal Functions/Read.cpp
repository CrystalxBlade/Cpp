#include <iostream>
#include <fstream>

int main()
{
    std::fstream myfile("sample.txt", std::ios::in);

    if(myfile.is_open())
    {
        std::string line;
        while (getline(myfile, line))
        {
            std::cout << line;
        }
        
    }
    

    return 0;
}