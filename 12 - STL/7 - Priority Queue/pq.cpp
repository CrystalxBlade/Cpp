#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> q;

    q.push(2);
    q.push(5);
    q.push(7);
    q.push(9);

    while(!q.empty())
    {
        std::cout << q.top() << " ";
        q.pop();
    }

    return 0;
}