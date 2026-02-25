#include <iostream>

int main()
{
    
    int capacity;
    std::cout << " How much tickets u want: ";
    std::cin >> capacity;                       
    

    int* tickets = new int[capacity];

    for(int i = 0; i < capacity; i++)
    {
        std::cout << "Enter ticket num: ";
        // std::cin >> *(tickets + i);
        std::cin >> tickets[i]; 
    }
    
    for(int i = 0; i < capacity; i++)
    {
        std::cout << tickets[i] << " "; 
    }

    delete[] tickets;
    tickets = nullptr;

    return 0;
}