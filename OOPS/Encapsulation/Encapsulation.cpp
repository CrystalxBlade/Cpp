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
};

int main()
{
    return 0;
}