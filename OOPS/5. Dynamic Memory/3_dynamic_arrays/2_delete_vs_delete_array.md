## 2️⃣ delete vs delete[]
### 🔹 delete

### Destroys one object
```
int* p = new int(5);
delete p;   // ✔️ correct
```
###🔹 delete[]

### Destroys each element in an array
```
int* arr = new int[5];
delete[] arr;   // ✔️ correct
```
### Why delete[] matters

### Because:

- C++ must call destructors for each element

- delete alone only destroys the first one

### ❌ Common bug (very dangerous)
```
int* arr = new int[5];
delete arr;     // ❌ undefined behavior
```
### This can:

- Leak memory

- Corrupt heap

- Crash randomly later