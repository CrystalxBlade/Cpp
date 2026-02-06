#include <iostream>

class Crystal
{
    public:
    static int num;

    Crystal()
    {
        num++;
        std::cout << "Construct for Obj : " << num << '\n';
    }

    ~Crystal()
    {
        num--;
        std::cout << "Destruct for Obj : " << num << '\n';
    }
};

int Crystal::num = 0;

int main()
{
    std::cout << "in the main function - - - - -\n ";

    Crystal c1;
    Crystal c2;

    return 0;
}