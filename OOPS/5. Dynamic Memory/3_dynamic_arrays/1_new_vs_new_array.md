## 1️⃣ new vs new[]
### 🔹 new (single object)

### Used when you allocate one variable.
```
int* p = new int(10);
```
What happens:

- Memory for one int is allocated on the heap

- p stores its address

### Free it like this:
```
delete p;
```
## 🔹 new[] (array of objects)

### Used when you allocate multiple elements.
```
int* arr = new int[5];
```
## What happens:

- Memory for 5 ints in a row is allocated

- arr points to the first element

### Free it like this:
```
delete[] arr;
```