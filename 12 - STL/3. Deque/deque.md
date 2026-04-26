## Deque -> Double Ended Queue

- It is similar to lists
- We can perform operation from both side fornt & back
- deque is implemented with the help of dynamic arrays
- random access is possible 


```
std::list<int> l = {9, 2, 5, 7};     ❌   can't access random memory

std::cout << l[2];
```

```
std::deque<int> d = {9, 2, 5, 7};    ✅ random memory is accessible

std::cout << d[2];
```