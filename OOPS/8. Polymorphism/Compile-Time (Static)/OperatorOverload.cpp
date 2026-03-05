#include <iostream>

class Vector2
{
    public:
    int x, y;

    Vector2(int xVal, int yVal) : x(xVal), y(yVal)
    {

    }

    // Overloading + operator
    Vector2 operator+(const Vector2& other)
    {
        return Vector2(x + other.x, y + other.y);
    }

    void show()
    {
        std::cout << "(" << x << " , " << y << ") \n";
    }
};

int main()
{
    Vector2 v1(2, 4);
    Vector2 v2(6, 8);
    
    Vector2 result = v1 + v2;  // Calls overloaded operator
    result.show();

    return 0;
}