## SHALLOW COPY (the dangerous one)
### ❌ Problem: two objects share the same memory
```
#include <iostream>

class Crystal
{
public:
    int* mana;

    Crystal(int m)
    {
        mana = new int(m);
    }

    // ❌ Default copy constructor (shallow copy)
    // Compiler copies pointer address only

    ~Crystal()
    {
        delete mana;
        std::cout << "Memory freed\n";
    }
};

int main()
{
    Crystal c1(10);
    Crystal c2 = c1;   // SHALLOW COPY

    std::cout << *c1.mana << '\n';
    std::cout << *c2.mana << '\n';

    return 0;
}
```
### What happens in memory
```
c1.mana ─┐
         ├──► [10]
c2.mana ─┘
```
## ❌ What goes wrong

### c1 destructor deletes memory

### c2 destructor deletes SAME memory again

### 💥 Crash / undefined behavior