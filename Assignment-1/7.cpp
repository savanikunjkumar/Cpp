#include <iostream>
using namespace std;

// Pass-by-reference
void updateSalary(double &salary)
{
    salary += 5000;
}

// Function returning reference
double& highestSalary(double &s1, double &s2)
{
    if (s1 > s2)
        return s1;
    else
        return s2;
}

int main()
{
    double salary1, salary2;

    cout << "Enter Salary of Employee 1: ";
    cin >> salary1;

    cout << "Enter Salary of Employee 2: ";
    cin >> salary2;

    // Update salary using pass-by-reference
    updateSalary(salary1);

    // Modify the highest salary using returned reference
    highestSalary(salary1, salary2) += 2000;

    cout << "\nUpdated Salaries:" << endl;
    cout << "Employee 1 Salary: " << salary1 << endl;
    cout << "Employee 2 Salary: " << salary2 << endl;

    return 0;
}
