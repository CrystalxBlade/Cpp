## 1. Built-in (Primitive) Exceptions

### These are basic data types thrown as errors.

### Examples:
### int, double, char, const char*

### Example:
```
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 404;   // integer exception
    }
    catch(int x)
    {
        cout << "Error code: " << x;
    }
}
```
### Here the program throws an integer as an exception.

### Another example:
```
throw "File not found";
```