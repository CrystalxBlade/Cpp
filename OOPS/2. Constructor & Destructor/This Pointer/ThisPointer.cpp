#include <iostream>

class Crystal
{
    private:
    std::string name;
    int age;

    public:
    Crystal(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void Display()
    {
        std::cout << "Name : " << name << '\n';
        std::cout << "Age : " << age << '\n';
    }
};

int main()
{
    Crystal c("Blade", 23);
    c.Display();

    return 0;
}