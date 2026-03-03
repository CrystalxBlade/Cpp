#include <iostream>

class Phone
{
    public:
    void Call()
    {
        std::cout << "Calling \n";
    }
};
class Camera
{
    public:
    void Photo()
    {
        std::cout << "Phot taken \n";
    }
};
class SmartPhone : public Phone, Camera
{
    public:
    void Internet()
    {
        std::cout << "Browsing internet ";
    }
};

int main()
{
    SmartPhone s;
    s.Call();

    return 0;
}