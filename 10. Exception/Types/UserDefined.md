## 3. User-defined Exceptions

### You can also create your own exception classes.

### Example:
```
#include <iostream>
using namespace std;

class MyException
{
public:
    void show()
    {
        cout << "Custom Exception occurred";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException e)
    {
        e.show();
    }
}
```
### This is useful when you want custom error behavior.