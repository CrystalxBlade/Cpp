#include <iostream>
#include <list>

int main()
{
    std::list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for(int li : l)
    {
        std::cout << li << " "; 
    }

    return 0;
}