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
};

int main()
{
    Blade a(100);
    Blade b = a;  // Deep Copy
    
    *b.hp = 200;

    std::cout << "a.hp = " << *a.hp << '\n';
    std::cout << "b.hp = " << *b.hp << '\n';

    return 0;
}