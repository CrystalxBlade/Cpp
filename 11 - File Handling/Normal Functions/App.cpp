#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myfile;     
    myfile.open("sample.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << "new appended txt";
    }
    
    myfile.close();

    return 0;
}