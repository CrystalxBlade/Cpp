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
    Human h1;

    h1.name = "Blade";
    h1.occupation = "Developer";
    

    return 0;;
}