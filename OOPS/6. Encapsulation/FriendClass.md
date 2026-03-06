### Internal idea
```
Secret class
   │
   │ friend access
   ▼
Hacker class
   │
   │ can access
   ▼
private members of Secret
```
- So this becomes legal:
```
s.code ✔
```
- Normally it would be illegal.