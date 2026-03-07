# 2. final on a class (prevents inheritance)
```
class Animal final
{
public:
    void speak()
    {
        std::cout << "Animal\n";
    }
};
```
### Now this is illegal:
```
class Dog : public Animal   // ❌ ERROR
{
};
```
### Because the class is sealed.

## Meaning:

### Animal cannot be inherited