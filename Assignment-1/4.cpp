#include <iostream>
using namespace std;

// Base Class
class Payment
{
public:
    virtual void pay()
    {
        cout << "Processing Payment..." << endl;
    }
};

// Derived Class: Credit Card
class CreditCard : public Payment
{
public:
    void pay() override
    {
        cout << "Payment Successful using Credit Card." << endl;
    }
};

// Derived Class: Debit Card
class DebitCard : public Payment
{
public:
    void pay() override
    {
        cout << "Payment Successful using Debit Card." << endl;
    }
};

// Derived Class: UPI
class UPI : public Payment
{
public:
    void pay() override
    {
        cout << "Payment Successful using UPI." << endl;
    }
};

// Derived Class: Net Banking
class NetBanking : public Payment
{
public:
    void pay() override
    {
        cout << "Payment Successful using Net Banking." << endl;
    }
};

int main()
{
    CreditCard cc;
    DebitCard dc;
    UPI upi;
    NetBanking nb;

    Payment *p;

    p = &cc;
    p->pay();

    p = &dc;
    p->pay();

    p = &upi;
    p->pay();

    p = &nb;
    p->pay();

    return 0;
}
