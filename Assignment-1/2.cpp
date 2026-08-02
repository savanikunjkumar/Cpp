#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    double amount;

    cin.ignore();
    account.createAccount();

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}
