#include <iostream>

class Blade
{
public:
      
      int* hp;

      Blade(int value)
      {
        hp = new int(value);
      }

          // ✅ Deep copy constructor

       Blade(const Blade& obj)
       {
        hp = new int(*obj.hp);
       }   

       ~Blade()
       {
        delete hp;
        std::cout << "Destructor Called \n";
       }
}

int main()
{
    return 0;
}