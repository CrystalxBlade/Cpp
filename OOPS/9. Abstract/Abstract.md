### An abstract class is a class that contains at least one pure virtual function (= 0) and cannot be used to create objects also abstract class is a class that contains at least one pure virtual function (= 0) and cannot be used to create objects.


## How it works internally
```
        Animal (Abstract Class)
        speak() = 0
              │
              │ must implement
              ▼
            Dog
         speak()
```
### The base class forces derived classes to implement the function.


## Pure Virtual Function

### A pure virtual function is a function that must be implemented by the derived class.

### Syntax:
```
virtual void functionName() = 0;
```
### The = 0 makes the class abstract.