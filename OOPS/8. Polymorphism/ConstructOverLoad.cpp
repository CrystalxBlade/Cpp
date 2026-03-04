#include <iostream>

class Player
{
    private:
    int health;
    int level;
    std::string name;

    public:

     // 1️⃣ No parameters
    Player()
    {
        health = 100;
        level = 1;
        name = "Blade";
        std::cout << "Default Player created \n";
    }

    // 2️⃣ Different NUMBER of parameters
    Player(int h)
    {
        health = h;
        level = 1;
        name = "Blade";
        std::cout << "One parameter constructor \n";
    }

    // 3️⃣ Different TYPES of parameters
    Player(int h, int l)
    {
        health = h;
        level = l;
        name = "Blade";
        std::cout << "Two parameter constructor \n";
    }

    // 4️⃣ Same number but DIFFERENT TYPES
    Player(int h, int l, std::string n)
    {
        health = h;
        level = l;
        name = n;
        std::cout << "Three parameter constructor \n";
    }

    // 5️⃣ Same types but DIFFERENT ORDER
    Player(std::string n, int l, int h)
    {
        health = h;
        level = l;
        name = n;
        std::cout << "Different order parameter constructor \n";
    }

    void show()
    {
        std::cout << "Health: " << health << " - Level: " << level << " - Name: " << name << '\n'; 
    }
};

int main()
{
    Player p;
    Player p2(100);
    Player p3(100, 1);
    Player p4(100, 1, "Crystal");
    Player p5("Crystal", 2,3);
    

    return 0;
}