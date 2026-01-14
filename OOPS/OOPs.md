# 🧠 One-line summary

### OOP is programming by modeling real-world entities using objects that combine data and behavior.

# What OOP really is

## OOP says:

### “Stop writing code like a long script.
### Start modeling your program like real-world things.”

### Instead of functions floating everywhere, you create objects that: hold data know how to act on that data


# 🌍 Real-world idea

## Think about a game character 🎮

### A character has:

## - health

### - level

- name

### And it can:

- attack

- heal

- die

That’s one object.

💻 Code version (C++)
class Player
{
public:
    int health;

    void attack()
    {
        std::cout << "Player attacks\n";
    }
};


Here:

Player → class (blueprint)

health → data

attack() → behavior