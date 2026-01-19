#include <iostream>

class Human
{
    public: 
    std::string name;
    std::string occupation;
    int age;

    void Play()
    {
        std::cout << "Playing Assassin's creed" << '\n';
    }

    void Sleep()
    {
        std::cout << "This guy is sleeping";
    }

};

int main()
{
    return 0;
}