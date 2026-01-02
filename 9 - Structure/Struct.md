## 🧠 What is a structure in C++?

A structure (struct) is a user-defined data type that groups different types of variables under one name.

Structs can contain many different data types (string, int, double, bool, etc.)
variables in structures are known as "members" members can be accessed with 
"Class Member Access Operator". 

Think of it as making your own custom data type.

## 🤔 Why do we need structures?

Suppose you want to store information about a student:

Name

Roll number

Marks

Without a structure, you’d need separate variables:

`std::string name;`
int roll;
float marks;


Now imagine storing this for 100 students — nightmare.

## ✅ Structure solves this
struct Student
{
    std::string name;
    int roll;
    float marks;
};


Now Student becomes a new data type.