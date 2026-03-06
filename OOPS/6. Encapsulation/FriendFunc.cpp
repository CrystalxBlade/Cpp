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
    friend void showBalance(BankAccount);
};

void showBalance(BankAccount ac)
{
    std::cout << "Balance is: " << ac.balance << '\n';
}

int main()
{
    BankAccount ac1(1000);

    showBalance(ac1);

    return 0;
}