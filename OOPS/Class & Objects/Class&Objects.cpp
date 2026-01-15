#include <iostream>

class Human
{
    public:
    std::string name;
    std::string occupation;
    int age;

    void play()
    {
        std::cout << "This person is playing" << "\n";
    }
    void sleep()
    {
        std::cout << "This person is sleeping";
    }
};

int main()
{
    return 0;;
}