#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    std::vector<int> v1;           // empty
    std::vector<int> v2(5);        //  5 elements

    std::vector<int> v3(5,7);      //  5 elements (7)
    for(int i : v3)
    {
        std::cout << i << std::endl;
    }

    std::vector<char> v4 {'z', 'u', 's', 'j', 't'};
    for(char c : v4)
    {
        std::cout << c << " ";
    }

    return 0;
}