#include <iostream>
#include <queue>

int main()
{
    /*
    std::priority_queue<int> q;

    q.push(2);
    q.push(9);
    q.push(7);
    q.push(5);

    while(!q.empty())
    {
        std::cout << q.top() << " ";        // 9 7 5 2
        q.pop();
    }

    */

    std::priority_queue<int, std::vector<int>, std::greater<int>> q;

    q.push(2);
    q.push(9);
    q.push(7);
    q.push(5);

    while(!q.empty())
    {
        std::cout << q.top() << " ";      // 2 5 7 9 
        q.pop();
    }

    return 0;
}