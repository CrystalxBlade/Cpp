#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    q.push(4);
    q.push(2);
    q.push(6);

    while(!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
    

    return 0;
}