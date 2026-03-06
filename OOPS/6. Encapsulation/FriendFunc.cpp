#include <iostream>

class BankAccount
{
    private:
    int balance;

    public:
    BankAccount(int b)
    {
        balance = b;
    }

       // friend function declaration
    friend void showBalance(BankAccount ac);
};

int main()
{
    return 0;
}