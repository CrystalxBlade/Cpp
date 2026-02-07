2️⃣ DEEP COPY (correct & safe)
✅ Solution: allocate new memory and copy value
#include <iostream>

class Crystal
{
public:
    int* mana;

    Crystal(int m)
    {
        mana = new int(m);
    }

    // ✅ Deep copy constructor
    Crystal(const Crystal& other)
    {
        mana = new int(*other.mana);
        std::cout << "Deep copy created\n";
    }

    ~Crystal()
    {
        delete mana;
        std::cout << "Memory freed\n";
    }
};

int main()
{
    Crystal c1(10);
    Crystal c2 = c1;   // DEEP COPY

    std::cout << *c1.mana << '\n';
    std::cout << *c2.mana << '\n';

    return 0;
}

Memory now
c1.mana ───► [10]
c2.mana ───► [10]


Separate memory. Safe destruction. No crash.