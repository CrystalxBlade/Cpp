## 🔥 What is a Destructor?

A destructor is a special member function that is automatically called when an object is destroyed to release resources.

A destructor is a special function in a class that:

Runs automatically

Runs when an object is destroyed

Frees resources like memory, files, connections, etc.

## ⏱️ When is Destructor Called?

Destructor is called automatically when:

Object goes out of scope

delete is used on dynamically allocated object

Program ends

🧠 Constructor vs Destructor
Constructor	Destructor
Initializes object	Cleans object
Runs on creation	Runs on destruction
Can take parameters	No parameters
Same name as class	~ClassName