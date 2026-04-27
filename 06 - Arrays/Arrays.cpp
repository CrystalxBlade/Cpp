#include <iostream>

int main()
{

  //----------------------- Declaration -----------------------
  
 
  //  🧱 1. Fixed-size array (basic declaration)  

        int numbers[5]; 

  /*  🧩 2. Declaration with initialization
      👉 You declare and assign values at the same time. */

        int numbers[5] = {10, 20, 30, 40, 50};


  /*  ⚡ 3. Let compiler decide the size
      👉 The compiler counts how many values you give. */ 
   
        int numbers[] = {10, 20, 30, 40, 50};

  /*  🎯 4. Partial initialization
      You can give fewer values — remaining elements become 0. */

        int numbers[5] = {10, 20}; 

  // Equivalent to {10, 20, 0, 0, 0}

  /*  🧮 5. Character array (string style)
      Used for storing text manually (without string type). */


        char name[6] = {'B', 'l', 'a', 'd', 'e', '\0'};

   /* 🧊 6. 2D Array (Matrix / Table)
      👉 Used for rows and columns. */

        int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

   /* 🧠 7. Array with constant variable as size
        Sometimes we declare the size using a variable. */

        const int SIZE = 5;
        int numbers[SIZE];

    /* ⚙️ 8. Array initialization later
    👉 Declare first, fill later in your program. */    

    
        int numbers[5];
        
        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;
        numbers[3] = 40;
        numbers[4] = 50;

}