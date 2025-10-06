#include <iostream>

int main()
{
    int num;
    std::cout << "Enter day no: ";
    std::cin >> num;

    switch(num)
    {
        case 1:std::cout<<"Monday";break;
        case 2:std::cout<<"Tuesday";break;
        case 3:std::cout<<"Wednesday";break;
        case 4:std::cout<<"Thursday";break;
        case 5:std::cout<<"Friday";break;
        case 6:std::cout<<"Saturday";break;
        case 7:std::cout<<"Sunday";break;
        default: std::cout<<"Not a day";

        return 0;
    }
}