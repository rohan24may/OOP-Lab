#include <iostream>
using namespace std;

class BankAccount
{
    int accountNo;
    float balance;

    static int totalAccounts;

public:

    BankAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    friend void displayAccount(BankAccount a);

    static void displayTotalAccounts()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void displayAccount(BankAccount a)
{
    cout << "Account No: " << a.accountNo << endl;
    cout << "Balance: " << a.balance << endl;
}

int main()
{
    BankAccount a1(101, 5000);
    BankAccount a2(102, 7500);
    BankAccount a3(103, 10000);

    displayAccount(a1);
    cout << endl;

    displayAccount(a2);
    cout << endl;

    displayAccount(a3);
    cout << endl;

    BankAccount::displayTotalAccounts();

    return 0;
}