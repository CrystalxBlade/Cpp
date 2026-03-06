#include <iostream>

class Secret
{
    private:
    int code = 6969;

    friend class Hacker;  // Hacker is a friend
};

class Hacker
{
    public:
    void revealSecret(Secret z)
    {
        std::cout << "Secret code: " << z.code; 
    }
};

int main()
{
    Secret s;
    Hacker h;

    h.revealSecret(s);

    return 0;
}