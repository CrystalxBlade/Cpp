#include <iostream>
#include <fstream>

int main()
{
    std::fstream file("data.txt", std::ios::out);

    file << "Saving game progress";
    file.close();

    return 0;
}