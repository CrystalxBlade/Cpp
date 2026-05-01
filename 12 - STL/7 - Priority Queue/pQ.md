## It always gives you the highest value first (by default)

🧠 Core Idea

Normal queue:
```
10 → 20 → 30  (10 comes out first)
```
Priority queue:
```
10, 50, 20 → 50 comes out first (largest)
```
### 📊 Diagram (Max Heap behavior)
```
        50
       /  \
     20    10
```

```
std::priority_queue<int, std::vector<int>, std::greater<int>> q;
                                                  \
                                                  functor         // greater<int> is functor 
                                                   \
                                                  (function object) // functor is nothing but a functin object;
```