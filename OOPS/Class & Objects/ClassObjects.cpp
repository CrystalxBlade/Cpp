#include <iostream>

class Human
{
    public: 
    std::string name;
    std::string occupation;
    int age;

    void Play()
    {
        std::cout << "Playing Assassin's creed";
    }

    void Sleep()
    {
        std::cout << "This guy is sleeping";
    }

};

int main()
{
    Human h1;
    h1.name = "Blade";
    h1.occupation = "Developer";
    h1.age = 23;

    std::cout << h1.name << '\n';
    std::cout << h1.occupation << '\n';
    std::cout << h1.age << '\n';


    return 0;
}