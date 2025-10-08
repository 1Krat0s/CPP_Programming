#include <iostream>

// Enumeration (enum)
enum Difficulty
{
    Easy, Normal, Hard // 0, 1, 2, ...
};

class BankAccount
{
    private:

        static int total_Accounts;
        int accountNumber;

    public:

        BankAccount(int accountNum) : accountNumber(accountNum)
        {
            total_Accounts++;
        }

        // Destructor
        ~BankAccount()
        {
            total_Accounts--;
        }
    
        static int getTotalAccounts()
        {
            return total_Accounts;
        }
};

// initialize static member
int BankAccount::total_Accounts = 0;

int main()
{
    std::cout << BankAccount::getTotalAccounts() << std::endl;
    for (int i = 0; i < 10; i++)
    {
        BankAccount ba(123);
        std::cout << BankAccount::getTotalAccounts() << std::endl;
    }
    std::cout << BankAccount::getTotalAccounts() << std::endl;


    return 0;
}