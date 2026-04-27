#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;
    s.push(5);
    s.push(8);
    s.push(2);

    std::cout << "top = " << s.top() << '\n';

    return 0;
}