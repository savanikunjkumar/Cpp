#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int customerID;

public:
    void setCustomer(string n, int id)
    {
        name = n;
        customerID = id;
    }

    void displayCustomer()
    {
        cout << "Customer Name : " << name << endl;
        cout << "Customer ID   : " << customerID << endl;
    }
};

// Derived Class
class Customer : public Person
{
public:
    void inputCustomer()
    {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Customer ID: ";
        cin >> customerID;
    }
};

// Product Class
class Product
{
private:
    string productName;
    double price;

public:
    void inputProduct()
    {
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Product Price: ";
        cin >> price;
    }

    void displayProduct()
    {
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
    }

    double getPrice()
    {
        return price;
    }
};

// Order Class
class Order
{
private:
    int orderID;

public:
    void inputOrder()
    {
        cout << "Enter Order ID: ";
        cin >> orderID;
    }

    void displayOrder(double amount)
    {
        cout << "Order ID     : " << orderID << endl;
        cout << "Total Amount : " << amount << endl;
    }
};

int main()
{
    Customer c;
    Product p;
    Order o;

    cout << "Enter Customer Details\n";
    c.inputCustomer();

    cout << "\nEnter Product Details\n";
    p.inputProduct();

    cout << "\nEnter Order Details\n";
    o.inputOrder();

    cout << "\n----- E-Commerce Details -----\n";
    c.displayCustomer();
    p.displayProduct();
    o.displayOrder(p.getPrice());

    return 0;
}
