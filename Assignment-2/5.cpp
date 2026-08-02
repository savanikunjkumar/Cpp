#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    string shapeName;
    int sides;

public:
    // Parameterized Constructor
    Shape(string name, int s)
    {
        shapeName = name;
        sides = s;
    }

    // Copy Constructor
    Shape(const Shape &obj)
    {
        shapeName = obj.shapeName;
        sides = obj.sides;
    }

    void display()
    {
        cout << "Shape Name : " << shapeName << endl;
        cout << "Number of Sides : " << sides << endl;
    }
};

int main()
{
    Shape s1("Triangle", 3);

    // Copy object using copy constructor
    Shape s2 = s1;

    cout << "Original Object\n";
    s1.display();

    cout << "\nCopied Object\n";
    s2.display();

    return 0;
}
