#include <iostream>

int main()
{
    /*
    std::string students[] = {"SpongeBob", "Patrick", "Squidward"};

    for(std::string stud : students)
    {
        std::cout << stud << "\n";
    }
    */

    int num[] = {6,4,9,2,0};

    for(int val : num)
    {
        std::cout << val << " ";
    }

    return 0;
}