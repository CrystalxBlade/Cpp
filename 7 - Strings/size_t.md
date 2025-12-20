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

## 🟢 What does size_t look like?

On most systems:

32-bit system → size_t = unsigned int

64-bit system → size_t = unsigned long long

But you don’t care which one.
You only care that it is:

❗ unsigned (never negative) -1

## 🟡 Simple rule (remember this forever)

If something represents a size, length, or index → use size_t.

❌ When NOT to use size_t
1️⃣ When the value can be negative

size_t is unsigned. It can never hold -1.

## 🔑 Final takeaway

size_t is not “better int”.
It is a specialized tool.

Use it for:

sizes

lengths

indexes

Avoid it for:

math

logic

countdowns

error states