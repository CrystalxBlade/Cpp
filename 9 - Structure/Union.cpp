#include <iostream>

union food
{
    int rice;
    char corn;
    float potato;
};


int main()
{
    food f;
    f.rice = 10;
    
    std::cout << f.rice;
    
    return 0;
}