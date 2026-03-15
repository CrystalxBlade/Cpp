#include <iostream>
#include <fstream>

int main()
{
    std::fstream myfile;     
    myfile.open("sample.txt", std::ios::app);
    if (myfile.is_open())
    {
        myfile << "new appended txt";
    }
    
    myfile.close();

    return 0;
}