## 🔹 Static Array
### What it is

- Size is fixed at compile time

- Stored on the stack

- Automatically destroyed

## Example
```
int arr[5] = {1, 2, 3, 4, 5};
```
## Characteristics

- Size cannot change

- Fast access

- No new, no delete

- Limited size (stack is small)

## When to use

- When size is known beforehand

- Small, temporary data

------------------------------------------------------
## 🔹 Dynamic Array
### What it is

- Size decided at runtime

- Stored on the heap

- You must manually free memory

## Example

```
int size = 5;
int* arr = new int[size];

// use array
arr[0] = 10;

// free memory
delete[] arr;
```
## Characteristics

- Size decided during execution

- Flexible

- Needs new[] and delete[]

- Risk of memory leaks if forgotten