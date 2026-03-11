#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("data.txt");

    file << "Hello Blade";
    file << "C++ file Handling";

    return 0;
}