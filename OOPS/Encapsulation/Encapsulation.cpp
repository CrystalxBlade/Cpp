#include <iostream>

class BankAccount
{
    private:
       std::string accountNumber;
       double balance;

    public:
       BankAccount(std::string accnum, double initialBal)
       {
         accountNumber = accnum;
         balance = initialBal;;
       }   
};

int main()
{
    return 0;
}