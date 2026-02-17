#include <iostream>

class Player
{
    int hp;

    public:
    Player(int h) : hp(h) {}

    int getHP() const
    {
        return hp;
    }

    void takeDamage(int dmg)
    {
        hp -= dmg;
    }
};

int main()
{
     const Player p(100);

     p.getHP();        // ✔️ allowed
//   p.takeDamage(10); // ❌ NOT allowed

    return 0;
}
