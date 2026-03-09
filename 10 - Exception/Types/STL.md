2. Standard Library Exceptions

C++ has a built-in hierarchy of exception classes inside the <stdexcept> and <exception> libraries.

They are more professional and commonly used.

Some common ones:

|    Exception	          |     Meaning                               |
|-------------------------|-------------------------------------------|
| std::exception          |	    Base class of most standard exceptions|
| std::runtime_error      |	    Error during runtime                  |
| std::logic_error        |	    Error in program logic                |
| std::out_of_range       |	    Accessing invalid index               |
| std::invalid_argument   |	    Invalid function argument             |
| std::bad_alloc          |	    Memory allocation failure             |