
----------------- How Pass by Value Works ---------------

🧩 1. Pass by Value

When you call a function and pass variables by value,
C++ creates a copy of those variables and sends them to the function.

🧠 Explanation:

a = 10 in main()

When passed to changeValue, a copy (x) = 10 is made.

Inside the function, only x changes → the real a stays the same.

📦 Think of it as:

“Here’s a photocopy of my data — modify that if you want, my original stays safe.”



----------------- How Pass by Reference Works ---------------

🔗 2. Pass by Reference

Here, instead of copying, you pass a reference (memory address) of the original variable.

That means — any change you make inside the function actually changes the original value.


🧠 Explanation:

x refers directly to the same memory as a.

So modifying x means you’re modifying a itself.

📡 Think of it as:

“Here’s my actual data — modify it directly.”




| Type              | Copy Made   | Affects Original | Syntax Example    |
| ----------------- | ---------   |--------------- | ------------------- |
| Pass by Value     | ✅ Yes     | ❌ No          | `void func(int x)`  |
| Pass by Reference | ❌ No      | ✅ Yes         | `void func(int &x)` |
