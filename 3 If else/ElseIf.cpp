#include <iostream>

int main()
{
    int x = 10;

    if(x > 5) std::cout << " Greater than 5\n";
    if(x > 8) std::cout << " Greater than 8\n";
    
    if(x > 5) std::cout << " Chain: Greater than 5\n";
    else if(x > 8) std::cout << " Chain: Greater than 8\n";

    return 0;

    /*

    Key difference:

    Multiple independent if statements → all true conditions will run.

    if ... else if ... else chain → only the first true condition runs, the rest are skipped.

    */
}