## 3️⃣ Dynamic arrays with classes (VERY IMPORTANT)

### ❌ Naive class (problematic)
```
class Inventory
{
public:
    int* items;

    Inventory(int size)
    {
        items = new int[size];
    }
};
```
### What’s wrong?

- No destructor

- Memory leak

- Copying this object causes shallow copy

### ✅ Proper class with destructor
```
class Inventory
{
public:
    int* items;

    Inventory(int size)
    {
        items = new int[size];
    }

    ~Inventory()
    {
        delete[] items;
    }
};
```
### Now:

- Memory is freed when object dies

- Still not safe to copy (yet)

### 🔥 Why copy is dangerous here
```
Inventory a(5);
Inventory b = a;   // shallow copy
```
### Both objects now point to the same array
### Destructor runs twice → 💥 double delete