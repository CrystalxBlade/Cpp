## List is also a squential containers like vectors but it is internally implemented as doubly linked list

- we can push from back & front
- we can pop from back & front
- random access is not possible 

👉 No indexing, but fast insert/delete anywhere

```
[1] ⇄ [2] ⇄ [3] ⇄ [4]
 ↑               ↑
prev           next
```
- 🧠 Think: Chain of nodes holding hands both ways