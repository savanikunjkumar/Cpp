#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    double price;

public:
    // Parameterized Constructor
    Product(int id, string name, double p)
    {
        productID = id;
        productName = name;
        price = p;
    }

    void display()
    {
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : Rs. " << price << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 65000);
    Product p2(102, "Smartphone", 25000);

    cout << "Product 1 Details\n";
    p1.display();

    cout << "\nProduct 2 Details\n";
    p2.display();

    return 0;
}
