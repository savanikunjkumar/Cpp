#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    float divide(int a, int b)
    {
        if (b == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
        return (float)a / b;
    }
};

int main()
{
    Calculator calc;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << calc.add(a, b) << endl;
    cout << "Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Multiplication: " << calc.multiply(a, b) << endl;
    cout << "Division: " << calc.divide(a, b) << endl;

    return 0;
}
