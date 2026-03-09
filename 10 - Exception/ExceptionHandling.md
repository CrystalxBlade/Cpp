## Exception handling is a mechanism in C++ used to detect runtime errors and handle them safely.

| Keyword	    | Purpose                     |
|---------------|-----------------------------|
|try	Code    |     that may cause an error |
|throw	        | Generates the error         |
|catch 	        | Handles the error           |


```
try
{
   risky code
}

If problem happens
      ↓
   throw error
      ↓
   catch block handles it
```   