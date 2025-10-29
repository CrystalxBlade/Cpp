#include <iostream>


/*

void countdown(int n)
{
    if (n == 0)
    {
        std::cout << "Boom" << std::endl;
        return;
    }
    
    std::cout << n << std::endl;

    countdown(n - 1);
}

int main()
{
    countdown(5);
    return 0;
}

*/

/*

int recursive(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    return m + recursive(m + 1, n);
    
}

int main()
{
    int m = 2, n = 4;
    std::cout << "Sum: " << recursive(m, n);
    return 0;
}

*/
void walk(int steps)
{
    if(steps > 0)
    {
        std::cout << "You take a step: " << steps << "\n";
        walk(steps - 1);
    }
}

int main()
{
    walk(100);
    return 0;
}