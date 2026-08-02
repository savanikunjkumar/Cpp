#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle
{
protected:
    string vehicleName;
    int days;

public:
    void input()
    {
        cout << "Enter Vehicle Name: ";
        cin >> vehicleName;

        cout << "Enter Number of Rental Days: ";
        cin >> days;
    }

    virtual void calculateRent()
    {
        cout << "Rental Charge: 0" << endl;
    }
};

// Derived Class - Car
class Car : public Vehicle
{
public:
    void calculateRent() override
    {
        cout << "Car Rental Charge: Rs. " << days * 1000 << endl;
    }
};

// Derived Class - Bike
class Bike : public Vehicle
{
public:
    void calculateRent() override
    {
        cout << "Bike Rental Charge: Rs. " << days * 500 << endl;
    }
};

// Derived Class - Truck
class Truck : public Vehicle
{
public:
    void calculateRent() override
    {
        cout << "Truck Rental Charge: Rs. " << days * 2000 << endl;
    }
};

int main()
{
    Vehicle *v;

    Car car;
    cout << "\nEnter Car Details\n";
    car.input();
    v = &car;
    v->calculateRent();

    Bike bike;
    cout << "\nEnter Bike Details\n";
    bike.input();
    v = &bike;
    v->calculateRent();

    Truck truck;
    cout << "\nEnter Truck Details\n";
    truck.input();
    v = &truck;
    v->calculateRent();

    return 0;
}
