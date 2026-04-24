#include <iostream>
using namespace std;



class BankAccount
{
private:
    double balance;

public:
    void setBalance(double amount)
    {
        balance = amount;
    }

    bool operator==(BankAccount second_account)
    {
        if (balance == second_account.balance)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};



int main()
{
    BankAccount account_1;
    BankAccount account_2;

    double balance_1;
    double balance_2;

    cout << "Enter balance of account 1: ";
    cin >> balance_1;

    cout << "Enter balance of account 2: ";
    cin >> balance_2;

    account_1.setBalance(balance_1);
    account_2.setBalance(balance_2);

    if (account_1 == account_2)
    {
        cout << "Both accounts have the same balance." << endl;
    }
    else
    {
        cout << "The account balances are different." << endl;
    }

    return 0;
}
