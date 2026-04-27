#include <iostream>

int main()
{
    /*

    Q1.
    -------------------------------->
    
    int num;
    std::cout << "Enter num: "; 
    std::cin >> num;
    if (num % 2 == 0)
    {
        std::cout << "Even";
    }
    else
    {
        std::cout << "Odd";
    }
        
    Q2.
    -------------------------------->

    int num = 4;
    if (num < 0)
    {
        std::cout << "Negative";
    }
    else if(num == 0)
    {
        std::cout << "Zero";
    }
    else
    {
        std::cout << "Positive";
    }

    Q3.
    -------------------------------->

    int a = 4, b = 6;

    if (a > b)
    {
        std::cout << "a is largest = " << a <<"\n";
    }
    else
    {
        std::cout << "b is largest = " << b << "\n";
    }

    Q4.
    -------------------------------->

    int a = 4, b = 6, c = 8;

    if (a > b && a > c )
    {
        std::cout << "A is greater = " << a << "\n";
    }
    else if (b > a && b > c)
    {
        std::cout << "B is greater = " << b << "\n";
    }
    else
    {
        std::cout << "C is greater = " << c << "\n";
    }

    Q5.
    -------------------------------->

    int year;
    std::cout << "Enter Year: ";
    std::cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        std::cout << "It's a Leap Year " << std::endl;
    }
    else 
    {
        std::cout << "Not a Leap Year " << std::endl;
    }

    Q6.
    -------------------------------->
    
    char ch;
    std::cout << "Enter an alphabet: ";
    std::cin >> ch;
    std::tolower(ch);
    
     if (ch >= 'A' && ch <= 'Z')    
    {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        std::cout << "It is a Vowel.\n"; 
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        std::cout << "It is a Consonant.\n";
    } 
    else 
    {
        std::cout << "Not a valid alphabet.\n";
    }

    Q7.
    -------------------------------->
    
    char ch;
    std::cout << "Enter an alphabet: ";
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << "Uppercase Letter: " << ch << std::endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        std::cout << "Lowercase Letter: " << ch << std::endl;
    }
    else
    {
        std::cout << "Not an English alphabet." << std::endl;
    }
        
    Q8.
    -------------------------------->
    
    int num;
    std::cout << "Enter a num: ";
    std::cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
    {
       std::cout << num <<" is Divisibile by 5 and 11 " << std::endl;
    }
    else
    {
        std::cout << num <<" is Not divisibile by 5 and 11 " << std::endl;
    }

    Q9.
    -------------------------------->

    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::isalpha(ch))
    {
        std::cout << ch << " is a Alphabet" << std::endl;
    }
    else if (std::isdigit(ch))
    {
        std::cout << ch << " is a Digit" << std::endl;
    }
    else
    {
        std::cout << ch << " @is a Special Character" << std::endl;
    }

    Q10.
    -------------------------------->
     
    double marks;
    std::cout << "Enter marks: ";
    std::cin >> marks;

    if (marks >= 40)
    {
        std::cout << "Pass" << std::endl;
    }
    else
    {
        std::cout << "Fail" << std::endl;  
    }

    Q11.
    -------------------------------->

    double marks;
    std::cout << "Enter marks: ";
    std::cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 80 && marks <= 100)
        {
            std::cout << "A" << std::endl;
        }
        else if (marks >= 65 && marks < 80)
        {
            std::cout << "B" << std::endl;
        }
        else if (marks >= 50 && marks < 65)
        {
            std::cout << "C" << std::endl;
        }
        else if (marks >= 33 && marks < 50)
        {
            std::cout << "D" << std::endl;
        }
        else
        {
            std::cout << "Fail" << std::endl;  
        }
    }
    else
    {
        std::cout << "Out of range or not a number" << std::endl;
    }

    Q12.
    -------------------------------->

    double num;
    std::cout << "Enter a num: ";
    std::cin >> num;
    double val = num;

    if (num < 0)
    {
        num = -num;
    }

    std::cout << "Absoluter value of " << val << " is: " << num << std::endl; 

    Q13.
    -------------------------------->

    int a = 90, b = 90, c = 0, angles;
    angles = a + b + c;

    if (angles == 180)
    {
        std::cout << "Valid triangle";
    }
    else 
    {
        std::cout << "Not Valid triangle";
    }

    Q14.
    -------------------------------->
    
    int a = 90, b = 45, c = 70;

    if (a == b && b == c && c == a)
    {
        std::cout << "Equilateral triangle";
    }
    else if (a == b || b == c || c == a)
    {
        std::cout << "Isoscele triangle";
    }
    else
    {
        std::cout << "Scalene triangle";
    }

    Q15.
    -------------------------------->

    int age = 18;
    if (age >= 18)
    {
       std::cout << " Eligibile to Vote";
    }
    else
    {
        std::cout << "Not eligibile to Vote";
    }
    
    Q16.
    -------------------------------->
    
    int year;
    std::cout << "Enter a century year (e.g., 1900 or 2000): ";
    
    if (std::cin >> year) 
    {
        if (year % 100 == 0) 
        {
            if (year % 400 == 0) 
            {
                std::cout << year << " is a **Leap Century Year**." << std::endl;
            } 
            else 
            {
                std::cout << year << " is a Century Year but is **NOT** a Leap Year." << std::endl;
            }
        } 
        else 
        {
            std::cout << year << " is not a century year." << std::endl;
        }
    }

    Q17.
    -------------------------------->
    
    double units, bill;
    std::cout << "Enter electricity units used: ";
    std::cin >> units;

    if (units <= 100)
    {
        bill = units * 1.5;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.5) + (units - 100) * 2.0;
    }
    else if (units <= 300)
    {
        bill = (100 * 1.5) + (100 * 2.0) + (units - 200) * 3.0;
    }
    else
    {
        bill = (100 * 1.5) + (100 * 2.0) + (100 * 3.0) + (units - 300) * 5.0;
    }

    std::cout << "Total Electricity Bill: " << bill << std::endl;
    
    Q18.
    -------------------------------->

    int sp, cp;
    std::cout << "Enter Selling Price: ";
    std::cin >> sp;
    std::cout << "Enter Cost Price: ";
    std::cin >> cp;

    if (sp > cp)
    {
        std::cout << "** Pofit **";
    }
    else if (cp > sp)
    {
        std::cout << "** Loss **";
    }
    else
    {
        std::cout << "No profit & No loss";
    }

    Q19.
    -------------------------------->

    int num;
    std::cout << "Enter an integer: ";

    if (!(std::cin>>num))
    {
       std::cout << "Invalid input, Please enter an integer " << std::endl;
    }

    int val = std::abs(num);

    if (val >= 1000 && val <= 9999)
    {
        std::cout << "4 digits " << std::endl;
    }
    else if (val >= 100 && val <= 999)
    {
        std::cout << "3 digits " << std::endl;
    }
    else if (val >= 10 && val <= 99)
    {
        std::cout << "2 digits " << std::endl;
    }
    else if (val >= 0)
    {
        std::cout << "1 digit " << std::endl;
    }
    else 
    {
        std::cout << "Number with more than 4 digits are Unexpected values" << std::endl;
    }

    Q20.
    -------------------------------->

    double x, y;

    std::cout << "Enter the X coordinate: ";
    std::cin >> x;
    std::cout << "Enter the Y coordinate: ";
    std::cin >> y;

    if (x > 0 && y > 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies in the First quadrant." << std::endl;
    else if (x < 0 && y > 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies in the Second quadrant." << std::endl;
    else if (x < 0 && y < 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies in the Third quadrant." << std::endl;
    else if (x > 0 && y < 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies in the Fourth quadrant." << std::endl;
    else if (x == 0 && y == 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies at the Origin." << std::endl;
    else if (x == 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies on the Y axis." << std::endl;
    else if (y == 0)
        std::cout << "The coordinate point (" << x << "," << y << ") lies on the X axis." << std::endl;
    */    

    return 0;
    
}