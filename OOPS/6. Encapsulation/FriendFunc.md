### How it works internally

```
main()
  │
  │ calls
  ▼
showBalance(acc1)
  │
  │ acc.balance  (private)
  ▼
allowed because class declared it as friend
```

### Without friend, this line would explode with an error:

```
acc.balance ❌ private
```