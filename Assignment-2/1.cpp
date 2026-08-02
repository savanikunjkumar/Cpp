#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    double salary;

protected:
    string department;

public:
    string name;

    void input()
    {
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> empID;

        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department : " << department << endl;
        cout << "Salary     : " << salary << endl;
    }
};

int main()
{
    Employee emp;

    emp.input();
    emp.display();

    return 0;
}
