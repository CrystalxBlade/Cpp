2️⃣ Union (union)
👉 “Store different data, but only ONE at a time”
```
union Data
{
    int i;
    float f;
    char c;
};
```
Key difference from struct

All members share the same memory

Only one value is valid at a time

Memory idea
[ same memory block ]
   i / f / c


If you write to i, f and c get overwritten.

Example
```
Data d;
d.i = 10;
std::cout << d.i;   // OK

d.f = 3.14;
std::cout << d.f;   // OK
// d.i is now garbage
```
Use when

✔ You want to save memory
✔ You know only one value will be used at a time
✔ Low-level work (drivers, compilers, protocols)

3️⃣ Enum (enum)
👉 “Create named constants”
```
enum Day
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};
```
What it does

Defines a set of named integer values

Improves readability

Prevents magic numbers

Example
```
Day today = Wednesday;

if (today == Wednesday)
{
    std::cout << "Midweek";
}
```

Internally:

Monday = 0
Tuesday = 1
Wednesday = 2
...

Enum with custom values
```
enum Status
{
    Success = 200,
    NotFound = 404,
    Error = 500
};
```