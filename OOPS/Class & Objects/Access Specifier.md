## 🟢 1. public

Open to everyone. No questions asked.
```
class Player
{
public:
    int health;
};

Player p;
p.health = 100;   // ✅ allowed
```
Use it for:

Functions you WANT others to use

Public interface of a class

### 🧠 Think:

“This is how the world interacts with me.”

🟡 2. private

Only accessible inside the class itself.
```
class Player
{
private:
    int health;

public:
    void setHealth(int h)
    {
        health = h;   // ✅ allowed
    }
};
```
```
Player p;
p.health = 100;   // ❌ ERROR
```
Use it for:

Internal data

Sensitive variables

Things that should not be modified directly

🧠 Think:

“Mind your business.”

🔵 3. protected

Private + accessible by derived (child) classes.
```
class Character
{
protected:
    int health;
};

class Player : public Character
{
public:
    void heal()
    {
        health += 10;   // ✅ allowed
    }
};
```
```
Player p;
p.health = 100;   // ❌ ERROR
```
Use it for:

Data shared with child classes

Base class internals

🧠 Think:

“Family only.”