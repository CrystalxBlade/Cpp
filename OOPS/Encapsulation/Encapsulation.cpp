#include <iostream>

class BankAccount
{
    private:
    std::string accoutnNumber;
    double balance;

    public:
    BankAccount(std::string accnum, double initialBal)
    {
        accoutnNumber = accnum;
        balance = initialBal;
    }

    double getBalance()
    {
        return balance;
    }

    double setBalance(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
        }
        else
        {
            std::cout << "Invalid deposit amount";
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            std::cout << "Invalid withdrawn amount";
        }
    }
};

int main()
{
    return 0;
}