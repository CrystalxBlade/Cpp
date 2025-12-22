# 🧠 One-line definition 

## A pointer is a variable that stores the memory address of another variable.


### 🏠 Real-life analogy (simple & accurate)

### A house has a value inside (TV, bed, etc.)

### A house address tells you where the house is

# In programming:

##  Thing ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤMeaning
### Variable ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤHouse
### Value	 ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤStuff inside
### Address	 ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤLocation
### Pointer	 ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤPaper that stores the address

ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ
ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ
## 🔢 Example without pointers first
### int x = 10;


### x → value = 10

### Stored somewhere in memory

### That place has an address (like 0x7ffe1234)

### You normally don’t care about the address.

## 👉 Now introduce a pointer
### int x = 10;
### int* p = &x;