#include <iostream>
#include <fstream>

int main()
{
    std::fstream myfile;
    myfile.open("sample.txt", std::ios::out);
    if(myfile.is_open())
    {
        myfile << "This is my file \n";
    }

    myfile.close();

    return 0;
}