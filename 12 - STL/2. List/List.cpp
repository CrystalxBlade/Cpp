#include <iostream>
#include <list>

int main()
{
    std::list<int> l;

    l.push_back(4);
    l.push_back(7);
    l.push_front(9);
    l.emplace_back(2);
    l.emplace_front(5);
    l.pop_back();
    l.pop_front();

    for(int li : l)
    {
        std::cout << li << " "; 
    }

    return 0;
}