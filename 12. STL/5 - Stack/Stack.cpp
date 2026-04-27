#include <iostream>
#include <stack>

int main()
{
    /*

    -------------------------------------------------------

    std::stack<int> s;
    s.push(5);
    s.push(8);
    s.push(2);

    std::cout << "top = " << s.top() << '\n';

    -------------------------------------------------------

    std::stack<int> s;
    s.push(5);
    s.push(8);
    s.push(2);

    while(!s.empty())
    {
        std::cout << s.top() << '\n';
        s.pop();
    }

    -------------------------------------------------------

    */

   std::stack<int> s1;
   s1.push(5);
   s1.push(7);
   s1.push(9);

   std::stack<int> s2;
   s2.swap(s1);

   std::cout << "s1 size: " << s1.size() << '\n';
   std::cout << "s2 size: " << s2.size();

    return 0;
}