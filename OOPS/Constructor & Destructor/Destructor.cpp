#include <iostream>

class Crystal
{
    public:
    int num = 0;

    Crystal()
    {
        num++;
        std::cout << "Construct for Obj : " << num << '\n';
    }

    ~Crystal()
    {
        num--;
        std::cout << "destruct for Obj : " << num << '\n';
    }
};

int main()
{
    std::cout << "in the main function: \n ";

    Crystal c;
    

    return 0;
}