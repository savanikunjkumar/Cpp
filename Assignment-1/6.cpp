#include <iostream>
using namespace std;

// Inline function
inline int square(int n)
{
    return n * n;
}

// Function with default argument
int power(int base, int exponent = 2)
{
    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " = " << square(num) << endl;

    cout << num << "^2 = " << power(num) << endl;      // Uses default exponent = 2
    cout << num << "^3 = " << power(num, 3) << endl;   // Uses exponent = 3

    return 0;
}
