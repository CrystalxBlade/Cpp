## 🧠 What is size_t?

size_t is just a type.
Specifically:

An unsigned integer type used to represent sizes and indexes.

## Why does it even exist?

Because C and C++ needed a type that can safely represent:

sizes of arrays

sizes of strings

memory sizes

positions (indexes)

So the language designers said:

“Let’s make ONE standard type for sizes.”