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

    void getBalance()
    {
        std::cout << "Current balance: " << balance << "\n"; 
    }

    double setBalance(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            std::cout << amount << " has been deposited \n";
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
            std::cout << "amount withdrawn: " << amount << '\n';
        }
        else
        {
            std::cout << "Invalid withdrawn amount";
        }
    }
};

int main()
{
    BankAccount myAccount("6969", 20000);

    myAccount.getBalance();
    myAccount.setBalance(500);
    myAccount.getBalance();
    myAccount.withdraw(1000);
    myAccount.getBalance();

    return 0;
}